#include <stdio.h>
void unesi(char niz[],int velicina)
{
	char znak=getchar();
	if(znak=='\n')
		znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
struct Osoba {
	char ime[15];
	char prezime[20];
	int telefon;
};
struct Osoba unos_osobe()
{
	struct Osoba o;
	printf ("Unesite ime: ");
	unesi(o.ime, 15);
	printf ("Unesite prezime: ");
	unesi(o.prezime, 20);
	printf ("Unesite broj telefona: ");
	scanf ("%d", &o.telefon);
	return o;
}
void ispis_osobe(struct Osoba f)
{
	printf ("%s %s, Tel: %d\n",f.ime,f.prezime,f.telefon);
}

int main()
{
	int k=0,b,i,s;
	struct Osoba imenik[100];
	do {
		printf ("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
		scanf ("%d", &b);
		if(b==1) {
			imenik[k]=unos_osobe();
			k++;
		} else if (b==2)
			for(i=0; i<k; i++) {
				s=i+1;
				printf ("\n%d. ",s);
				ispis_osobe(imenik[i]);
			}
	} while (b!=0);
	return 0;
}
