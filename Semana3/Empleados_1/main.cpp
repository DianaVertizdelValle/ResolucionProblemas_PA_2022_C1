#include <QCoreApplication>
#include "empleadoporcomision.h"
#include "empleadobasemascomision.h"

/**
    Ejemplo de mala práctica en la definición de la clase
    EmpleadoBaseMasComision sin utilizar herencia
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");
    EmpleadoPorComision empleado1("Sue Jones", 10000, 0.06 );
    EmpleadoBaseMasComision empleado2( "Bob Lewis", 5000, 0.04, 300);
    empleado1.mostrarInformacion();
    empleado2.mostrarInformacion();
    return a.exec();
}
