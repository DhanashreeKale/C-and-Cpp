#include <iostream>
using namespace std;

class Mycomplex
{
public:
    int real, imaginary;

    Mycomplex();
    Mycomplex(int rl, int img);

    void display();

    void addition(Mycomplex c1, Mycomplex c2);
    void subtraction(Mycomplex c1, Mycomplex c2);
    void multiplication(Mycomplex c1, Mycomplex c2);
    void conjugate(Mycomplex c1);
    void norm(Mycomplex c1);
};
