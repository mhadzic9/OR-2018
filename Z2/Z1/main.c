#include <stdio.h>

int main()
{
	int N,i,j;
	printf ("Unesite broj N: ");
	scanf ("%d", &N);
	for (;;) {
		if ((N>=0) && ((N-1)%4==0)) {
			printf ("\n");
			break;
		}
		if ((N<0) || ((N-1)%4!=0)) {
			printf ("N nije ispravno!\n");
			printf ("Unesite broj N: ");
			scanf ("%d", &N);

		}
		i++;
	}
	for (i=1; i<=N; i++) {
		for (j=1; j<=N; j++) {
			if (i==1 || i==N || j==N || (j==1 && i>=N-(N-3)) || (i==N-(N-3) && j<=N-2) || (j==N-2 && i<=N-2 && i>=N-(N-3)) || (i==N-2 && j>=N-N+3 && j<=N-2) || (j==N-(N-3) && i>=N-(N-5) && i<=N-2) || (i==N-(N-5) && j>=N-(N-3) && j<=N-4))
				printf ("*");
			else
				printf (" ");




		}
		printf ("\n");
	}




	return 0;
}
