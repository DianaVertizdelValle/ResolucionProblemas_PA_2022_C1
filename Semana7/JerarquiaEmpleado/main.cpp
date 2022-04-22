#include <QCoreApplication>

#include "empleado.h"
#include "empleadoasalariado.h"
#include "empleadoporhoras.h"
#include "empleadoporcomision.h"
#include "empleadobasemascomision.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");
    // establece el formato de salida de punto flotante
    //cout << fixed << setprecision( 2 );

    // crea objetos de las clases derivadas
//    EmpleadoAsalariado empleadoAsalariado("John Smith",  800 );
//    EmpleadoPorHoras empleadoPorHoras("Karen Price", 16.75, 40 );
//    EmpleadoPorComision empleadoPorComision("Sue Jones", 10000, .06 );
//    EmpleadoBaseMasComision empleadoBaseMasComision("Bob Lewis", 5000, .04, 300 );

    cout << "Usando vinculacion estática:\n";

    // imprime la información de cada empleado y sus ingresos, usando vinculación estática
//    empleadoAsalariado.mostrarInformacion();
//    cout << "\n";
//    empleadoPorHoras.mostrarInformacion();
//    cout << "\n";
//    empleadoPorComision.mostrarInformacion();
//    cout << "\n";
//    empleadoBaseMasComision.mostrarInformacion();
//    cout << "\n";
//-----------------------------------------------------

//    Empleado *empleado_seleccionado;
//    int opcion=-1;

//    while(opcion !=0)
//    {
//        cout<<"Seleccione al empleado para conocer su ingreso: "<<endl;
//        cout<<"1. Empleado asalariado: John Smith"<<endl;
//        cout<<"2. Empleadao por horas: Karen Price"<<endl;
//        cout<<"3. Empleado por comision: Sue Jones"<<endl;
//        cout<<"4. Empleado base + comision: Bob Lewis"<<endl;
//        cout<<"0 para terminar el programa"<<endl;
//        cout<<"\ningrese el número de la opción correspondiente: ";
//        cin>>opcion;

//        switch(opcion)
//        {
//            case 1:
//                empleado_seleccionado = &empleadoAsalariado;
//                break;
//            case 2:
//                empleado_seleccionado = &empleadoPorHoras;
//                break;
//            case 3:
//                empleado_seleccionado = &empleadoPorComision;
//                break;
//            case 4:
//                empleado_seleccionado = &empleadoBaseMasComision;
//                break;
//            case 0:
//                cout<<"Bye!!"<<endl;
//                break;
//            default:
//                cout<<"opción incorrecta!!!"<<endl;
//                cout<<"selecciona por defecto al empleado asalariado: John Smith"<<endl;
//                empleado_seleccionado = &empleadoAsalariado;
//                break;
//        }

//        if(opcion !=0)
//        {
//            cout << empleado_seleccionado->getNombre()<<" obtuvo $"
//                 <<empleado_seleccionado->calcularIngresos()<<"\n\n";
//        }
//    }


//------------------------------------------------------------
    //Empleado emp1("Diana");
    Empleado *empleado_seleccionado = nullptr;
    int opcion=-1;

    while(opcion !=0)
    {
        cout<<"Seleccione al empleado para conocer su ingreso: "<<endl;
        cout<<"1. Empleado asalariado: John Smith"<<endl;
        cout<<"2. Empleadao por horas: Karen Price"<<endl;
        cout<<"3. Empleado por comision: Sue Jones"<<endl;
        cout<<"4. Empleado base + comision: Bob Lewis"<<endl;
        cout<<"0 para terminar el programa"<<endl;
        cout<<"\ningrese el número de la opción correspondiente: ";
        cin>>opcion;

        switch(opcion)
        {
            case 1:
                empleado_seleccionado = new EmpleadoAsalariado("John Smith",  800);
                break;
            case 2:
                empleado_seleccionado = new EmpleadoPorHoras("Karen Price", 16.75, 40);
                break;
            case 3:
                empleado_seleccionado = new EmpleadoPorComision("Sue Jones", 10000, .06);
                break;
            case 4:
                empleado_seleccionado = new EmpleadoBaseMasComision("Bob Lewis", 5000, .04, 300);
                break;
            case 0:
                cout<<"Bye!!"<<endl;
                break;
            default:
                cout<<"opción incorrecta!!!"<<endl;
                cout<<"selecciona por defecto al empleado asalariado: John Smith"<<endl;
                empleado_seleccionado = new EmpleadoAsalariado("John Smith",  800);
                break;
        }

        if(opcion !=0)
        {
//            cout << empleado_seleccionado->getNombre()<<" obtuvo $"
//                 <<empleado_seleccionado->calcularIngresos()<<"\n\n";

            empleado_seleccionado->mostrarInformacion();
            cout<<endl;
        }

        delete empleado_seleccionado;
    }



    return 0;
}
