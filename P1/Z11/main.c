#include <stdio.h>

int main() {
    int niz[1000],i,d5=0,d7=0,d11=0,n;
    printf ("Unesite brojeve: ");
    do {
        scanf ("%d" , &niz[i]);
    } while(niz[i]!=-1);
    
    n=i;
    for (i=0;i<n;i++) {
        if (niz[i]%5==0) {
        d5++;
        printf ("Broj djeljivih sa 5: %d" , d5);
        }
        if (niz[i]%7==0) {
            d7++;
            printf ("Broj djeljivih sa 7: %d" , d7);
            
        }
        if (niz[i]%11==0) {
            d11++;
            printf ("Broj djeljivih sa 11: %d" , d11);
        }
    }
	return 0;
}
