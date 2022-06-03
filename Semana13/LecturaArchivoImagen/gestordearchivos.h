#ifndef GESTORDEARCHIVOS_H
#define GESTORDEARCHIVOS_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class GestorDeArchivos
{
    public:
        GestorDeArchivos();
        vector<vector<Pixel> > cargarImagen(string prutaArchivo);
};

#endif // GESTORDEARCHIVOS_H
