#include <QCoreApplication>

#include "polinomio.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Polinomio<float, unsigned short> p1, p2, p3; // Coeficientes float
    Polinomio<float> p1, p2, p3; // Coeficientes float

    // p1(x) = x + 3
    p1.addTermino(1, 1);
    p1.addTermino(3, 0);

    // p2(x) = x^2 - 5
    p2.addTermino(-5, 0);
    p2.addTermino(1, 2);

    // p3(x) = x^2 + x - 2
    p3 = p1 + p2;

    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "p3 = " << p3 << endl;
    cout << endl;

    cout << "p1(1) = " <<  p1(1) << endl; // 4
    cout << "p2(2) = " <<  p2(2) << endl; // -1
    cout << "p3(3) = " <<  p3(3) << endl; // 10

    return a.exec();
}
