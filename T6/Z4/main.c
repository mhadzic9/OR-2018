#include <stdio.h>

int main()
{
	int niz[10],x,i,j,n=10;
	printf ("Unesite elemente niza: ");
	for (i=0; i<10; i++) {
		scanf ("%d", &niz[i]);
		if (niz[i]==-1)
			break;
	}
	n=i;
	printf ("Unesite element koji treba izbaciti: ");
	scanf ("%d", &x);
	for (i=0; i<n; i++) {
		if (niz[i]==x) {
			for (j=i; j<n-1; j++) {
				niz[j]=niz[j+1];
			}
			i--;
			n--;
		}
	}


	printf ("Novi niz glasi: ");
	for (i=0; i<n; i++) {
		if (i!=n-1)
			printf ("%d,", niz[i]);
		else
			printf ("%d", niz[i]);

	}
	return 0;
}
