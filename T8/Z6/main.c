#include <stdio.h>
void sortiraj(double niz[], int vel)
{
	double *p, *q, *min;
	for (p=niz; p<niz+vel; p++) {
		min=p;
		for (q=p+1; q<niz+vel; q++) {
			if (*q<*min)
				min=q;
		}
		double temp=*p;
		*p=*min;
		*min=temp;
	}
}

int main()
{
	double niz[3]= {1,2,3};
	sortiraj(niz,3);
	return 0;
}
