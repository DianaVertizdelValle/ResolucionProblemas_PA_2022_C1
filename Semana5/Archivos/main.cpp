#include <QCoreApplication>
#include <cuadrilatero.h>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    system("chcp 65001");

    Cuadrilatero cuad1(12, 8, 30);
    Cuadrilatero cuad2(9, 11, 25);
    Cuadrilatero cuad3(7, 4, 45);

//*************Escritura de archivos de texto***************

//    fstream archivoSalida("../Archivos/cuadrilateros.txt", ios::out); //por defecto ofstream ios::out

//    if(archivoSalida)
//    {
//        archivoSalida<<'c'<<' '<<cuad1.getLado1()<<' '<<cuad1.getLado2()<<' '<<cuad1.getRotacion()<<endl;
//        archivoSalida<<'c'<<' '<<cuad2.getLado1()<<' '<<cuad2.getLado2()<<' '<<cuad2.getRotacion()<<endl;
//        archivoSalida<<'c'<<' '<<cuad3.getLado1()<<' '<<cuad3.getLado2()<<' '<<cuad3.getRotacion()<<endl;
//        archivoSalida.close();
//    }

//****************Lectura de archivos de texto***************

//    fstream archivoEntrada( "../Archivos/cuadrilateros.txt", ios::in );
//    char caracter;
//    int lado1, lado2, rotacion;

//    if(archivoEntrada)
//    {
//        cout << left << setw( 10 ) << "id" << setw( 10 )
//             << "lado1"<< setw( 10 ) << "lado2" << "rotacion"<<endl;

//        while( archivoEntrada>>caracter>>lado1>>lado2>>rotacion )
//        {
//            cout<<left<<setw(10)<<caracter<<setw(10)<<lado1<<setw(10)<<lado2<<rotacion<<endl;
//        }
//        archivoEntrada.close();
//    }

//*******************Escritura de archivo binario*****************
//*******************Escritura de strings archivo binario*****************

//    fstream archivo_bin( "../Archivos/arch_str.bin", ios::out | ios::binary );
//    int entero = 25;
//    string prueba = "Esta es una prueba";
//    int tamanio = prueba.size();

//    if (archivo_bin)
//    {
//        archivo_bin.write(reinterpret_cast<const char*>(&entero), sizeof (int));
//        archivo_bin.write(reinterpret_cast<const char*>(&tamanio), sizeof (int));
//        archivo_bin.write(reinterpret_cast<const char*>(&prueba[0]),tamanio);

//        archivo_bin.close();
//    }

//*******************Lectura de archivo binario*****************

    string prueba;
    int entero = 0;
    int tamanio;

    fstream archivo_bin("../Archivos/arch_str.bin", ios::in | ios::binary);

    if(archivo_bin)
    {
        archivo_bin.read(reinterpret_cast<char *>(&entero), sizeof(int));
        archivo_bin.read(reinterpret_cast<char *>(&tamanio), sizeof(int));
        prueba.resize(tamanio);
        archivo_bin.read(reinterpret_cast<char *>(&prueba[0]), tamanio);
        archivo_bin.close();
    }
    cout<<"Entero: "<<entero<<endl;
    cout<<"string: "<<prueba<<endl;

    cout<<"Fin del programa"<<endl;
    return a.exec();
}
