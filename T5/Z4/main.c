#include <stdio.h>

int main()
{
	int A[1000],i,max,br5=0,br7=0,br11=0;
	printf ("Unesite brojeve:\n");
	for (i=0; i<1000; i++) {
		scanf ("%d", &A[i]);
		if (A[i]==-1) {
			max=i;
			break;
		}
	}
	for (i=0; i<max; i++) {
		if (A[i]%5==0)
			br5++;
		if (A[i]%7==0)
			br7++;
		if (A[i]%11==0)
			br11++;
	}
	printf ("Djeljivih sa 5: %d\n", br5);
	printf ("Djeljivih sa 7: %d\n", br7);
	printf ("Djeljivih sa 11: %d", br11);
	return 0;
}
