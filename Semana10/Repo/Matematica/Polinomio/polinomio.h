#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>
#include <map>
#include <cmath>

/*
y = p(x) = an * x^n + a(n-1) * x^(n-1) + ... + a1 * x^1 + a0 * x^0
         = <an, n> + <a(n-1), n-1> + ... + <a1, 1> + <a0, 0>
*/

// y = x^1000 + 3

using namespace std;

// ************************
// Declaraciones
// ************************
template<class C, class E = unsigned short>
class Polinomio
{
public:
    Polinomio();

    void setTermino(C pCoef, E pExp); // establece un término
    void addTermino(C pCoef, E pExp); // suma un término
    void volcarEnFlujo(ostream& pOut);

    Polinomio<C,E> operator+(Polinomio<C,E> pPol);
    C operator()(C pX);

private:
    map<E, C> terminos; // Los mapas ORDENAN sus pares de valores según la clave.
};

template<class C, class E>
ostream& operator<<(ostream& pOut, Polinomio<C,E>& pPol);

// ************************
// Definiciones
// ************************
template<class E, class C>
Polinomio<E, C>::Polinomio() {

}

template<class C, class E>
void Polinomio<C, E>::setTermino(C pCoef, E pExp) {
    terminos[pExp] = pCoef; // una asignación directa
}

template<class C, class E>
void Polinomio<C, E>::addTermino(C pCoef, E pExp) {
    terminos[pExp] += pCoef;
}

template<class C, class E>
void Polinomio<C, E>::volcarEnFlujo(ostream &pOut)
{
    // y = p(x) = <an, n> + <a(n-1), n-1> + ... + <a1, 1> + <a0, 0>
    if( terminos.size() == 0 )
        pOut << "<>";
    else { // > 0
        //map<E,C>::iterator it = terminos.begin();
        //typename map<E,C>::iterator it = terminos.rbegin();
        auto it = terminos.rbegin();
        auto it_final = terminos.rend(); // "it_final" apunta a un sitio "después del último pair"
        --it_final; // ahora "it_final" apunta al último pair.
        while ( it != it_final ) { // it apunta a un "pair<E,C>"
            pOut << "<" << it->second << ',' << it->first << "> + " ;
            ++it;
        }
        pOut << "<" << it->second << ',' << it->first << ">" ; // it == it_final
    }
}

template<class C, class E>
Polinomio<C, E> Polinomio<C,E>::operator+(Polinomio<C, E> pPol) {
    Polinomio<C,E> suma = *this;
    for(auto par : pPol.terminos)
        suma.addTermino( par.second, par.first ); // (coef, exponente)
    return suma;
}

template<class C, class E>
C Polinomio<C,E>::operator()(C pX) {
    // y = p(x) = an * x^n + a(n-1) * x^(n-1) + ... + a1 * x^1 + a0 * x^0
    C y = 0; // ó: C(0); // inicialización en el valor 0 del tipo C
    C coef;
    E expo;
    for(pair<E,C> par : terminos) {
        coef = par.second;
        expo = par.first;
        y += coef*pow(pX, expo);
    }

    //    pair<E,C> par;
    //    for(auto it = terminos.begin(); it != terminos.end(); ++it) {
    //        par = *it;
    //        coef = par.second;
    //        expo = par.first;
    //        y += coef*pow(pX, expo);
    //    }

    return y;
}

template<class C, class E>
ostream& operator<<(ostream& pOut, Polinomio<C,E>& pPol) {
    pPol.volcarEnFlujo(pOut);
    return pOut;
}

#endif // POLINOMIO_H
