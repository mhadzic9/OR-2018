#include <stdio.h>
void unesi(char niz[],int velicina)
{
	char znak=getchar();
	if (znak=='\n') znak=getchar();
	int i=0;
	while (i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
char* kapitaliziraj(char *s)
{
	char* poc=s;
	int razmak=1;
	while (*s!='\0') {
		if(*s==' ')
			razmak=1;
		else if(razmak==1) {
			razmak=0;
			if(*s>='a' && *s<='z') {
				*s-=32;
			}
		}
		s++;
	}
	return poc;
}
int main()
{
	char s[100];
	printf ("Unesite neki tekst: ");
	unesi(s,100);
	printf ("%s",kapitaliziraj(s));

	return 0;
}
