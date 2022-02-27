#include <stdio.h>
#define BROJ_EL 10
int main()
{
    int niz[BROJ_EL],suma=0,i,s=0,brp=0,min,max;
    float p;
    for (i=0; i<BROJ_EL; i++) {
        printf ("Unesite %d. cijeli broj: ", i+1);
        scanf ("%d", &niz[i]);
        suma+=niz[i];
        if (niz [i]%2==0) {
            s+=niz[i];
            brp++;
        }
        if (i==0) {
            min=niz[i];
            max=niz[i];
        }
        if (niz[i]<min)
            min=niz[i];
        if (niz[i]>max)
            max=niz[i];
    }
    float prosjek=(float)suma/BROJ_EL;
    if (brp==0) {
        p=0;

    } else {
        p=(float)s/brp;
    }
    printf ("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek);
    printf ("Srednja vrijednost parnih brojeva je %.2f.\n", p);
    printf ("Najveci element je %d a najmanji %d.", max, min);





    return 0;
}
