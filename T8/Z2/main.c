#include <stdio.h>
#define vel 8
float maxtemp(float p[8])
{
	float najveca=p[0];
	int i;
	for (i=0; i<vel; i++) {
		if (p[i]>najveca)
			najveca=p[i];
	}
	return najveca;
}
float prtemp (float p[8])
{
	float suma=0;
	int i;
	for (i=0; i<vel; i++) {
		suma+=p[i];
	}
	return suma/vel;
}
int main()
{
	float p[vel];
	int i;
	printf ("Unesite temperature: ");
	for (i=0; i<vel; i++) {
		scanf ("%f", &p[i]);

	}
	printf ("Maksimalna temperatura: %.1f\n", maxtemp(p));
	printf ("Prosjecna temperatura: %.1f\n", prtemp(p));
	return 0;
}
