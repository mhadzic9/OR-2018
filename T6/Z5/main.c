#include <stdio.h>

int main()
{
	int A[10][10],i,j;
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			scanf ("%d", &A[i][j]);
		}
	}
	int min=A[0][0];
	for (i=1; i<10; i++) {
		if (A[i][i]<min)
			min=A[i][i];
	}
	printf ("%d", min);



	return 0;
}
