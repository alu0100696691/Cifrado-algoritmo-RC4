#ifndef RC4_H
#define RC4_H

#include <QMainWindow>

using namespace std;

namespace Ui {
class rc4;
}

class rc4 : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit rc4(QWidget *parent = 0);
    void rc4_init(QStringList key, unsigned int key_length);  //metodo sobrecargado para crear la caja S
    void rc4_init(QString key, unsigned int key_length);
    int rc4_output();  //generar secuencia cifrante
    void swap(int caja[], unsigned int i, unsigned int j);  //mezcla de la caja S
    void tobinario (int value);  //pasar a binario un entero
    ~rc4();
    
private slots:
    void on_ejecutar_clicked();
    void on_salir_clicked();

private:
    Ui::rc4 *ui;
    int i,j,t;
    int S[256];  //contendra el vector de estado
    int k[256];  //array con la semilla repetida 256 veces
    char numBinario[8];

};

#endif // RC4_H
