#include <QCoreApplication>
#include <iostream>

using namespace std;


unsigned long factorial(unsigned long numero)
{
    if(numero <=1)
        return 1;
    return numero*factorial(numero -1);
}

unsigned long fibonacci(unsigned long numero)
{
    if((numero == 0)||(numero==1))
        return numero;
    return fibonacci(numero -1) + fibonacci(numero-2);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");
    cout<<"Factorial de 5: "<<endl;
    cout<<factorial(5)<<endl;
    cout<<"Fibonacci en 4: "<<endl;
    cout<<fibonacci(5)<<endl;
    cout<<"\nFin del programa"<<endl;
    return a.exec();
}
