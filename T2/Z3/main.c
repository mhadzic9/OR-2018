#include <stdio.h>

int main() {
	int dan, mjesec;
	printf ("Dan: ");
	scanf("%d" , &dan);
	printf("Mjesec: ");
	scanf("%d" , &mjesec);
	if (mjesec==1 && dan >=20) {
		printf("Vas znak je Vodolija!");
	} else if(mjesec==2 && dan<=18) {
		printf ("Vas znak je Vodolija!");
	} else if (mjesec==2 && dan>=19) {
		printf("Vas znak je Ribe!");
	} else if(mjesec==3 && dan<=20) {
		printf ("Vas znak je Ribe!");
	} else if (mjesec==3 && dan>20) {
		printf ("Vas znak je Ovan!");
	} else if (mjesec ==4 && dan<=19) {
		printf("Vas znak je Ovan!");
	} else if (mjesec==4 && dan>19) {
		printf("Vas znak je Bik!");
	} else if (mjesec==5 && dan<=20) {
		printf ("Vas znak je Bik!");
	} else if (mjesec==5 && dan>20) {
		printf("Vas znak je Blizanci!");
	} else if(mjesec==6 && dan<=20) {
		printf("Vas znak je Blizanci!");
	} else if (mjesec ==6 && dan>20) {
		printf ("Vas znak je Rak");
	} else if (mjesec==7 && dan<=22) {
		printf ("Vas znak je Rak!");
	} else if (mjesec==7 && dan>22) {
		printf ("Vas znak je Lav!");
	} else if (mjesec==8 && dan<=22) {
		printf("Vas znak je Lav!");
	} else if (mjesec==8 && dan>22) {
		printf ("Vas znak je Djevica!");
	} else if(mjesec==9 && dan <=22) {
		printf ("Vas znak je Djevica!");
	} else if (mjesec==9 && dan>22) {
		printf ("Vas znak je Vaga!");
	} else if (mjesec==10 && dan<=22) {
		printf ("Vas znak je Vaga!");
	} else if (mjesec==10 && dan>22) {
		printf ("Vas znak je Skorpija!");
	} else if (mjesec==11 && dan<=21) {
		printf ("Vas znak je Skorpija!");
	} else if (mjesec==11 && dan>21) {
		printf ("Vas znak je Strijelac!");
	} else if (mjesec==12 && dan<=21) {
		printf ("Vas znak je Strijelac!");
	} else if (mjesec==12 && dan>21) {
		printf ("Vas znak je Jarac!");
	} else if (mjesec==1 && dan<20) {
		printf("Vas znak je Jarac1");
	}
	return 0;
}
