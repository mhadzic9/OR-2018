#include <stdio.h>
#include <stdlib.h>
struct Vrijeme {
	int sati;
	int minute;
	int sekunde;
};
struct Vrijeme unesi()
{
	struct Vrijeme d;
	scanf ("%d%d%d", &d.sati,&d.minute,&d.sekunde);
	return d;
}
int proteklo(struct Vrijeme v1,struct Vrijeme v2)
{
	int ukupno1=0,ukupno2=0,ukupno=0;
	ukupno1=3600*v1.sati+60*v1.minute+v1.sekunde;
	ukupno2=3600*v2.sati+60*v2.minute+v2.sekunde;
	ukupno=abs(ukupno1-ukupno2);
	return ukupno;
}
int main()
{
	printf ("Unesite prvo vrijeme (h m s): ");
	struct Vrijeme v1=unesi();
	printf ("\nUnesite drugo vrijeme (h m s): ");
	struct Vrijeme v2=unesi();
	int ukupno=proteklo(v1,v2);
	printf ("\nIzmedju dva vremena je proteklo %d sekundi.",ukupno);

	return 0;
}
