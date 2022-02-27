#include <stdio.h>
long faktorijel (int n)
{
    long fact=1,i;
    for (i=1; i<=n; ++i) {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    float x,suma=0;
    int n,i;
    printf ("Unesite broj n u intervalu [1, 12]: ");
    scanf ("%d", &n);
    printf ("Unesite realan broj x: ");
    scanf ("%f", &x);
    for (i=1; i<=n; i++) {
        suma=suma+(x/faktorijel(i));
    }
    printf ("Suma od 1 do %d za x = %.3f je %.3f",n,x,suma);


    return 0;
}
