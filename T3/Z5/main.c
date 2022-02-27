#include <stdio.h>
#include <math.h>
int main() {
	int n,i;
	double suma=0;
	printf ("Unesite broj n: ");
	scanf ("%d" , &n);
	for (i=1;i<=n;i++) {
		suma +=(pow(-1.0,i-1.0)/i);
	}
	printf ("Koristeci %d clanova suma je %.3f." , n, suma);
	return 0;
}
