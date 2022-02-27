#include <stdio.h>
#include <math.h>
long faktorijel (int n)
{
    long fact=1,i;
    for (i=1; i<=n; ++i) {
        fact=fact*i;
    }
    return fact;
}
double sinus(double x, int n)
{
    float suma=0;
    int i;
    for (i=1; i<=n; i++) {
        suma=suma+((pow(-1,i-1))*pow(x,2*i-1)/faktorijel(2*i-1));

    }
    return suma;
}

int main()
{
    double x,razlika,procenat;
    int n;
    printf ("Unesite x: ");
    scanf ("%lf", &x);
    printf ("\nUnesite n: ");
    scanf ("%d", &n);
    printf ("\nsin(x)=%f\n", sin(x));
    printf ("sinus(x)=%f\n", sinus(x,n));
    razlika=sin(x)-sinus(x,n);
    procenat=razlika*100;
    printf ("Razlika: %f (%.2f%%).", fabs(razlika),fabs(procenat));

    return 0;
}
