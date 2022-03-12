#include <QCoreApplication>
#include "cuentabancaria.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CuentaBancaria cuenta1;
    cuenta1.mostrar_mensaje();

    CuentaBancaria cuenta2(0, 101, "Diana Vertiz");    
    cuenta2.setSaldo_disponible(1000);
    cout<<"Cuenta2 pertenece a: "<<cuenta2.getNombre_usuario()<<endl;
    cout<<"El saldo disponible es: "<<cuenta2.getSaldo_disponible()<<endl;

    cout<<"Fin del programa"<<endl;
    return a.exec();
}
