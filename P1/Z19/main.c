#include <stdio.h>

int main() {
	int niz[10],i,n;
	for (i=0;i<10;i++) {
		printf ("Unesite %d-ti clan niza: ",i+1);
		scanf ("%d" , &niz[i]);
	}
	n=i;
	for (i=0;i<10;i++) {
		if(niz[i]%2!=0) {
			niz[i]=niz[n-1];
			n--;
			i--;
		}
	}
	printf ("Nakon izbacivanja niz glasi:%d" , niz[n-1]);
	
	return 0;
}
