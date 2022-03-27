#include <QCoreApplication>
#include "empleadoporcomision.h"
#include "empleadobasemascomision.h"

/**
  Ejemplo de uso de datos protected en la clase base, en este caso, la clase derivada
  tiene acceso a ellos, sin embargo, esta práctica se desaconseja porque es probable que
  los métodos en la clase derivada sean dependientes de la implementación de la clase
  base. Las clases derivadas deberían depender de los métodos de la clase base y no de
  sus atributos. Declarar los miembros de la clase base como private (en lugar de protected)
  permite modificar la implementación de la clase base, sin tener que modificar
  la implementación de la clase derivada.
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
