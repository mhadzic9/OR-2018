#include <stdio.h>

int main()
{
	int A,B,i,j;
	float mat[100][100],suma=0;
	printf ("Unesite dimenzije matrice: ");
	scanf ("%d", &A);
	scanf ("%d", &B);
	printf ("Unesite elemente matrice: ");
	for (i=0; i<A; i++) {
		for (j=0; j<B; j++) {
			scanf ("%f", &mat[i][j]);
		}
	}
	for (i=0; i<A; i++) {
		for (j=0; j<B; j++) {
			if (i==0 || i==A-1)
				suma+=mat[i][j];
			else if (j==0 || j==B-1)
				suma+=mat[i][j];

		}
	}
	printf ("Suma elemenata na rubu je %.2f", suma);
	return 0;
}
