#include <iostream>
#include "zespolone.h"

using namespace std;

int main()
{

    complex z1, z2;
    cin >> z1.re >> z1.im;
    cin >> z2.re >> z2.im;
    print(z1);
    print(z2);
    complex z;
    z = add(z1,z2);
    print(z);
    z = substract(z1,z2);
    print(z);
    z = multiply(z1,z2);
    print(z);
    z = divide(z1,z2);
    print(z);

    return 0;
}
