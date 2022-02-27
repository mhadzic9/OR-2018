#include <stdio.h>

int pascal(int x,int y)
{
	if (x<1 || y<1 || y>x)
		return -1;
	if (y==1 || x==y)
		return 1;
	return pascal (x-1,y-1) + pascal (x-1,y);
}

int main()
{
	int x,y,n,i,j;
	printf ("Unesite n: ");
	scanf ("%d", &n);
	printf ("\n");
	for (i=1; i<=n; i++) {
		for (j=1; j<=i; j++) {
			printf ("%-4d", pascal(i,j));
		}
		printf ("\n");
	}


	return 0;
}
