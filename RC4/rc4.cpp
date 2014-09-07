#include "rc4.h"
#include "ui_rc4.h"
#include <QStringList>
#include "QDebug"

rc4::rc4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rc4)
{
    ui->setupUi(this);
}

rc4::~rc4()
{
    delete ui;
}

void rc4::on_ejecutar_clicked()
{

    QString semilla,texto,cifrado,toQstring;
    QStringList semillaList;
    QStringList textoList;
    int salida;


    semilla=ui->pass->toPlainText();
    texto=ui->text->toPlainText();
    cifrado=ui->cifra->toPlainText();


    if(ui->decimal->isChecked())   //las entradas son con numeros decimales separados por comas
    {
        textoList = texto.split(",");
        semillaList = semilla.split(",");

        //inicializacion del proceso
        rc4_init(semillaList, semillaList.size());
        i = j = 0;

        //salida
        for(int x=0;x<textoList.size();x++)
        {
            salida=( textoList[x].toInt() ^ S[rc4_output()] );  //XOR y guardamos en entero la salida
            tobinario(salida);  //salida la pasamos a binario 8 bits
            toQstring.append("DECIMAL:\t"+QString::number(salida)+"\tBINARIO:\t"+QString(numBinario)+"\n");
        }
    }
    else  //entrada con texto plano y salida en binario
    {

        //inicializacion del proceso
        rc4_init(semilla, semilla.size());
        i = j = 0;

        //salida
        for(int x=0;x<texto.size();x++)
        {
            salida=( texto[x].toLatin1() ^ S[rc4_output()] );  //XOR y guardamos en entero la salida
            tobinario(salida);  //salida la pasamos a binario 8 bits
            toQstring.append("BINARIO:\t");
            toQstring.append(numBinario);
            toQstring.append("\tDECIMAL:\t");
            toQstring.append(QString::number(salida)+"\n");
        }
    }

    ui->cifra->setPlainText(toQstring);   //mostramos el resultado
    ui->cifra->show();
}


void rc4::swap(int caja[], unsigned int i, unsigned int j)  //intercambio
{
    int aux;
    aux = caja[i];
    caja[i] = caja[j];
    caja[j] = aux;
}


/* KSA Inicialización*/
void rc4::rc4_init(QStringList key, unsigned int key_length)  //decimales separados por comas
{
    for (i = 0; i < 256; i++)  //llenamos el array s con enteros de 0 a 255
    {
        S[i] = i;
        k[i] = key[i % (key_length)].toInt();        
    }

    for (i = j = 0; i < 256; i++)  //permutacion de la caja s, mezclamos
    {        
        j = (j + k[i] + S[i]) % 256;   //j+clave+caja
        swap(S, i, j);
    }
}

void rc4::rc4_init(QString key, unsigned int key_length)  //texto plano
{
    for (i = 0; i < 256; i++)  //llenamos el array s con enteros de 0 a 255
    {
        S[i] = i;
        k[i] = key[i % (key_length)].toLatin1();
    }

    for (i = j = 0; i < 256; i++)  //permutacion de la caja s, mezclamos
    {
        j = (j + k[i] + S[i]) % 256;   //j+clave+caja
        swap(S, i, j);
    }
}


/* PRGA Generación de secuencia cifrante*/
int rc4::rc4_output()
{
    i = (i + 1) % 256;
    j = (j + S[i]) % 256;

    swap(S, i, j);
    t = (S[i] + S[j]) % 256;
    return t;
}

void rc4::tobinario (int value){   //para crear numero binario
  for (int i = 0; i < 8; i++){
    numBinario[i] = 0;
  }
  for (int i = 7; i >= 0; --i, value >>= 1){
    numBinario[i] = (value & 1) + '0';
  }
}


void rc4::on_salir_clicked()
{
    close();
}
