#include <stdio.h>
#define BROJ_EL 5
int main() {
    int niz[BROJ_EL],i,br;
    for (i=0;i<BROJ_EL;i++) {
        printf ("Unesite %d-ti clan niza: " , i+1);
        scanf ("%d" , &niz[i]);
    }
    br=0;
    for (i=0;i<BROJ_EL;i++) {
        if (niz[i]>=50 && niz[i]<=100) 
        br=1;
        
    }
    if (br==0)
    printf ("Niz ne sadrzi niti jedan broj iz intervala od 50 do 100.");
    else
    printf ("Niz sadrzi barem jedan broj iz intervala od 50 do 100.");
   
	return 0;
}
