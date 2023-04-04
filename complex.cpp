#include <iostream>

using namespace std;

struct complex
{
    double re;
    double im;
};

void print(complex z)
{
    if (z.im < 0)
        cout << z.re << z.im << "i" << endl;
    else
        cout << z.re << "+" << z.im << "i" << endl;
}

complex add(complex a, complex b)
{
    complex z;
    z.re = a.re + b.re;
    z.im = a.im + b.im;

    return z;
}

complex substract(complex a, complex b)
{
    complex z;
    z.re = a.re - b.re;
    z.im = a.im - b.im;

    return z;
}

complex multiply(complex z1, complex z2)
{
    complex z;
    z.re = z1.re * z2.re - z1.im * z2.im;
    z.im = z1.re * z2.im + z1.im * z2.re;

    return z;
}
complex divide(complex z1, complex z2)
{
    complex z;
    z.re = (z1.re*z2.re + z1.im*z2.im)/
                (z2.re*z2.re + z2.im*z2.im);
    z.im = (-z1.re*z2.im + z1.im*z2.re)/
                (z2.re*z2.re + z2.im*z2.im);
    return z;
}

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
