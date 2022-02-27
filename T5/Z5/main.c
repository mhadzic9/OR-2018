#include <stdio.h>

int main()
{
	int A[1000],i,j,brojaci[101]= {0};
	printf ("Unesite brojeve:\n");
	for (i=0; i<1000; i++) {
		scanf ("%d", &A[i]);
		if (A[i]==-1)
			break;
		else if (A[i]<0 || A[i]>100) {
			printf ("Brojevi moraju biti izmedju 0 i 100!\n");
			i--;
		}
	}
	int n=i;
	for (j=0;j<n;j++) {
		brojaci [A[j]]++;
	}
	for (i=0; i<101; i++) {
		if (brojaci[i]!=0)
			printf ("Broj %d se javlja %d puta.\n", i, brojaci[i]);
	}
	return 0;
}
