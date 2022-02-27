#include <stdio.h>

int main()
{
	int mat[10][10],novamat[10][10],broj,i,j,max,min,redmin=0,redmax=0;
	printf ("Unesite elemente matrice: ");
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			scanf ("%d", &broj);
			mat[i][j]=broj;
		}
	}
	min=mat[0][0];
	max=mat[0][0];
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			if (mat[i][j]<min) {
				min=mat[i][j];
				redmin=i;
			}
			if (mat[i][j]>max) {
				max=mat[i][j];
				redmax=i;
			}
		}
	}
	if (redmin==redmax)
		printf ("Najmanji i najveci element se nalaze u istom redu.");
	else {
		for (i=0; i<10; i++) {
			for (j=0; j<10; j++) {
				if (i==redmin)
					novamat[i][j]=mat[redmax][j];
				else if (i==redmax)
					novamat[i][j]=mat[redmin][j];
				else
					novamat[i][j]=mat[i][j];
			}
		}
		printf ("Nakon zamjene matrica glasi:\n");
		for (i=0; i<10; i++) {
			for (j=0; j<10; j++) {
				if (j!=9)
					printf ("%d ", novamat[i][j]);
				else
					printf ("%d", novamat[i][j]);
			}
			printf ("\n");
		}
	}
	return 0;
}
