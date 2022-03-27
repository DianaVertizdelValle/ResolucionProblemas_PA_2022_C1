#include <QCoreApplication>
#include "empleadoporcomision.h"
#include "empleadobasemascomision.h"

/**
    Ejemplo de herencia pública. En la herencia pública los miembros
    protected y public de la clase base mantienen el mismo tipo de
    acceso en la clase base. Los miembros privados en la clase base
    no pueden ser accedidos desde la clase derivada en ningún tipo de
    herencia (public, protected, private). Como se ve en la implementación
    de la clase derivada, no se puede acceder a los atributos privados
    de la clase base.
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
