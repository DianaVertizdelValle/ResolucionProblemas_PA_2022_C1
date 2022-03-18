#include "cliente.h"


Cliente::Cliente(string pnombre)
{
    nombre = pnombre;
    cout<<"Constructor de cliente"<<endl;
}

Cliente::~Cliente()
{
    nombre = "";
    cout<<"Destructor de cliente"<<endl;
}

void Cliente::mostrar_informacion()
{
    cout<<"Nombre de cliente: "<<nombre<<endl;
}
