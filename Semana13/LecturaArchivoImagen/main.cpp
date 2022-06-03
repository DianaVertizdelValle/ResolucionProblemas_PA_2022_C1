#include <QApplication>
#include "gestordearchivos.h"
#include "../Repo/Graficacion/Graficador2D/graficador.h"
#include "dibujoimagen.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    int ancho = 640;
    int alto = 445;

    string ruta, nombre;
    ruta = "../LecturaArchivoImagen/imagenes/";
    nombre = "laguna_san_jorge_bolivia.img";

    GestorDeArchivos gestor;
    Imagen img;
    vector<vector<Pixel>> mat = gestor.cargarImagen(ruta + nombre);
    img.setImagen(mat);

    //Dibujar....

    return app.exec();
}
