#include <bits/stdc++.h>

using namespace std;

int main()
{
    int var;
    printf("Podaj liczbe: ");   // cstdio albo C: stdio.h
    scanf("%d", &var);          // cstdio albo C: stdio.h
    // %d - liczba integer, %ld long integer, %lld long long integer
    // %f - float, %lf - double
    // %.2f - float z precyzją dwóch miejsce po przecinku
    // %c - char, %s - string
    printf("Twoja liczba to: %d", var);

    return 0;
}