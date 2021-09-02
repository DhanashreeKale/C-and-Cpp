#include "Mycomplex.h"
#include <cmath>
#include <iomanip>

Mycomplex::Mycomplex()
{
    real = 0;
    imaginary = 0;
}

Mycomplex::Mycomplex(int rl, int img)
{
    real = rl;
    imaginary = img;
}
void Mycomplex::display()
{
    cout << real << "+" << imaginary << "i" << endl;
}

void Mycomplex::addition(Mycomplex c1, Mycomplex c2)
{
    Mycomplex result;
    this->real = c1.real + c2.real;
    this->imaginary = c1.imaginary + c2.imaginary;
    cout << "First + Second=";
}
void Mycomplex::subtraction(Mycomplex c1, Mycomplex c2)
{
    Mycomplex result;
    this->real = c1.real - c2.real;
    this->imaginary = c1.imaginary - c2.imaginary;
    cout << "First - Second=";
}
void Mycomplex::multiplication(Mycomplex c1, Mycomplex c2)
{
    Mycomplex result;
    this->real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    this->imaginary = c1.real * c2.imaginary + c2.real * c1.imaginary;
    cout << "First * Second=";
}

void Mycomplex::conjugate(Mycomplex c1)
{
    Mycomplex result;
    this->real = c1.real;
    this->imaginary = (-1) * c1.imaginary;
    cout << "~Number =";
}

void Mycomplex::norm(Mycomplex c1)
{
    double norm;
    norm = sqrt(pow(c1.real, 2) + (c1.imaginary, 2));
    cout << "Norm = " << fixed << setprecision(2) << norm;
}
