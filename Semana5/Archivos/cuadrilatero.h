#ifndef CUADRILATERO_H
#define CUADRILATERO_H


class Cuadrilatero
{
    public:
        Cuadrilatero(int, int, int);

        int getLado1() const;
        void setLado1(int value);

        int getLado2() const;
        void setLado2(int value);

        int getRotacion() const;
        void setRotacion(int value);

    private:
        int lado1;
        int lado2;
        int rotacion;
};

#endif // CUADRILATERO_H
