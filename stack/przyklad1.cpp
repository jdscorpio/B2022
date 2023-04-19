#include <bits\stdc++.h>

using namespace std;

int main()
{
    int number;
    scanf("%d", &number);   // cstdio, stdio.h
    printf("%d\n", number);
    scanf("%1d", &number);
    printf("%d\n", number);
    int h, m, s;
    scanf("%d:%d:%d",&h, &m, &s);
    printf("%d-%d-%d\n",h, m, s);
    long long int a;
    float b;
    scanf("%lld %f", &a, &b);
    printf("%lld %f\n", a, b);
    double c;
    scanf("%lf", &c);
    printf("%lf %.2lf %10.5lf\n", c, c, c);
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);

    return 0;
}