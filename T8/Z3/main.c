#include <stdio.h>
#define vel 100
float maxtemp(float p[],int br)
{
	float najveca=p[0];
	int i;
	for (i=0; i<br; i++) {
		if (p[i]>najveca) {
			najveca=p[i];
		}
	}
	return najveca;
}
float prtemp(float p[], int br)
{
	float suma=0;
	int i;
	for (i=0; i<br; i++) {
		suma+=p[i];
	}
	return suma/br;
}
int main()
{
	float p[vel];
	int i,br_temp;
	printf ("Unesite broj mjerenja: ");
	scanf ("%d", &br_temp);
	printf ("Unesite temperature: ");
	for (i=0; i<br_temp; i++) {
		scanf ("%f", &p[i]);
	}
	printf ("Maksimalna temperatura: %.1f", maxtemp(p,br_temp));
	printf ("\nProsjecna temperatura: %.1f", prtemp(p,br_temp));

	return 0;
}
