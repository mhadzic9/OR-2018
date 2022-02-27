#include <stdio.h>

int main() {
    int niz[100],i,n,m,k;
    for (i=0;i<100;i++) {
        printf ("Unesite %d. clan niza: " , i+1);
        scanf ("%d" , &niz[i]);
        if (niz[i]==-1) break;
    }
    m=i;
    printf ("Unesite broj za pretragu: ");
    scanf ("%d" , &n);
    k=0;
    for(i=0;i<m;i++) {
    if (niz[i]==n) {
        k=i;
    }    
    }    
    printf ("Broj %d je unesen kao %d. po redu." , n, k+1);
	return 0;
}
