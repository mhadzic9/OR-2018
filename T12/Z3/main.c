#include <stdio.h>
#include <stdlib.h>
#define kapacitet 1000
struct Student {
	int index,predmet,ocjena;
};
int main()
{
	struct Student niz[kapacitet];
	char d='%';
	int i=0,suma=0,broj_uspjesnih=0,predmet,broj_ocjena=0;
	float prosjek_ocjena,prolaznost;
	FILE* f=fopen("ispiti.txt","r");
	if(f==NULL) {
		printf ("Nije se dobro ucitalo.");
		exit (1);
	}
	while (fscanf (f, "%d %d %d",&niz[i].index,&niz[i].predmet,&niz[i].ocjena)==3 && i<kapacitet)
		i++;

	int br=i;
	printf ("Unesite predmet: ");
	scanf("%d", &predmet);
	for (i=0; i<br; i++) {
		if(niz[i].predmet==predmet) {
			broj_ocjena++;
			suma+=niz[i].ocjena;
			if(niz[i].ocjena>=6)
				broj_uspjesnih++;
		}
	}
	if(broj_ocjena==0)
		printf ("Zalimo, ali ne postoje podaci o predmetu sa brojem %d!",predmet);
	else {
		prosjek_ocjena=(float)suma/broj_ocjena;
		prolaznost=(float)broj_uspjesnih/broj_ocjena;
		printf ("Prosjecna ocjena: %.2f",prosjek_ocjena);
		printf ("\nProlaznost: %.f%c",prolaznost*100,d);

	}

	return 0;
}
