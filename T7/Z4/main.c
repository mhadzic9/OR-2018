#include <stdio.h>
int obrnut(int n)
{
    int b=0;
    do {
        int c=n%10;
        n=n/10;
        b=b*10+c;


    } while (n!=0);
    return b;
}

int main()
{
    int x;
    printf ("Unesite broj: ");
    scanf ("%d", &x);
    x=obrnut(x);
    printf ("%d", x);

    return 0;
}
