#include <stdio.h>
#include <stdlib.h>
struct Vrijeme {
	int sati;
	int minute;
	int sekunde;

};
struct Vrijeme unesi ()
{
	struct Vrijeme t;
	scanf("%d%d%d", &t.sati,&t.minute,&t.sekunde);
	return t;
}
void ispisi(struct Vrijeme t)
{
	printf ("\nIzmedju dva vremena je proteklo ");
	printf ("%d sati, %d minuta i %d sekundi.",t.sati,t.minute,t.sekunde);
}
struct Vrijeme proteklo(struct Vrijeme v1,struct Vrijeme v2)
{
	struct Vrijeme v;
	int ukupno=0,ukupno1=0,ukupno2=0;
	ukupno1=3600*v1.sati+60*v1.minute+v1.sekunde;
	ukupno2=3600*v2.sati+60*v2.minute+v2.sekunde;
	ukupno=abs(ukupno2-ukupno1);
	v.sati=(ukupno/3600)%3600;
	ukupno-=v.sati*3600;
	v.minute=(ukupno/60)%60;
	ukupno-=v.minute*60;
	v.sekunde=ukupno;
	return v;
}
int main()
{
	printf ("Unesite prvo vrijeme (h m s): ");
	struct Vrijeme v1=unesi();
	printf ("\nUnesite drugo vrijeme (h m s): ");
	struct Vrijeme v2=unesi();
	struct Vrijeme ukupno=proteklo(v1,v2);
	ispisi(ukupno);
	return 0;
}
