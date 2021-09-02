/*
Write a class Complex with the following functionality: 
Add, sub, multiply, complex conjugate norm and display the output in a proper format
Define as many constructors as requires eg. default, parameterized, copy etc
*/

#include "Mycomplex.h"

int main()
{
    int real1, imaginary1, real2, imaginary2;
    Mycomplex result;

    cout << "Number 1:Enter Real part: ";
    cin >> real1;
    cout << "Number 1:Enter Imaginary part: ";
    cin >> imaginary1;

    cout << "Number 2:Enter Real part: ";
    cin >> real2;
    cout << "Number 2:Enter Imaginary part: ";
    cin >> imaginary2;

    Mycomplex obj1(real1, imaginary1);
    cout << "First Complex Number:";
    obj1.display();

    Mycomplex obj2(real2, imaginary2);
    cout << "Second Complex Number:";
    obj2.display();

    result.addition(obj1, obj2);
    result.display();

    result.subtraction(obj1, obj2);
    result.display();

    result.multiplication(obj1, obj2);
    result.display();

    result.conjugate(obj1);
    result.display();

    result.norm(obj1);
    return 0;
}

/*OUTPUT
Number 1:Enter Real part: 4
Number 1:Enter Imaginary part: 5
Number 2:Enter Real part: 3
Number 2:Enter Imaginary part: 2
First Complex Number:4+5i
Second Complex Number:3+2i
First + Second=7+7i
First - Second=1+3i
First * Second=2+23i
~Number =4+-5i
Norm = 4.24
*/
