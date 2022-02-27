#include <stdio.h>

int main()
{
	int iznos,a,b,c,d,e,f;
	printf ("Unesite iznos: ");
	scanf ("%d", &iznos);
	a=iznos/50;
	b=(iznos%50)/20;
	c=((iznos%50)%20)/10;
	d=(((iznos%50)%20)%10)/5;
	e=((((iznos%50)%20)%10)%5)/2;
	f=(((((iznos%50)%20)%10)%5)%2)/1;
	printf ("%d novcanica od 50 KM", a);
	printf ("\n%d novcanica od 20 KM", b);
	printf ("\n%d novcanica od 10 KM", c);
	printf ("\n%d novcanica od 5 KM", d);
	printf ("\n%d novcanica od 2 KM", e);
	printf ("\n%d novcanica od 1 KM", f);

	return 0;
}
