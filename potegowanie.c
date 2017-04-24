
//new zmiana 8
#include<stdio.h>
float potega(float x, int n)
{
    if (n==0) return 1;
    else return x*potega(x, n-1);
}

int main()
{
    float x;
    int n;
    printf ("Podaj podstawe rzeczywista: ");
    scanf ("%f", &x);
    printf ("Podaj wykladnik naturalny: ");
    scanf ("%i", &n);
    if (n<0) printf ("Wykladnik nie moze byc mniejszy od 0");
    else printf ("%f do potegi %i wynosi %f", x, n, potega(x, n));
    return 0;
}
