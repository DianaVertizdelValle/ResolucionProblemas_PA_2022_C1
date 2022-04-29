#ifndef EXCEPCIONDIVISIONENTRECERO_H
#define EXCEPCIONDIVISIONENTRECERO_H
#include <stdexcept> //incluye la clase runtime_error

using namespace std;

class ExcepcionDivisionEntreCero : public runtime_error
{
    public:
        ExcepcionDivisionEntreCero():runtime_error("\nintento de división entre cero")
        {
            //cuerpo de constructor vacío
        }
};

#endif // EXCEPCIONDIVISIONENTRECERO_H
