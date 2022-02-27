#include <stdio.h>

int main() {
	int niz[50],i,n;
	printf ("Unesite broj elemenata niza: ");
	scanf("%d" , &n);
    while (n<1 || n>50) {
			printf ("Unos neispravan!");
			printf ("\nUnesite broj elemenata niza: ");
			scanf("%d" , &n);
			
		}
		printf ("Unesite %d brojeva: " ,n);
		for (i=0;i<n;i++) {
			scanf ("%d" , &niz[i]);
	    	niz[i]=niz[n-1];
	    	n--;
	   
	   
}
for (i=0;i<n;i++) {
	printf ("%d" , &niz[i]);
}
	

	
	return 0;
}
