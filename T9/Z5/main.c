#include <stdio.h>
void unesi(char niz[], int velicina)
{
	char znak=getchar();
	if (znak== '\n') znak=getchar();
	int i=0;
	while(i<velicina-1 && znak!='\n') {
		niz[i]=znak;
		i++;
		znak=getchar();
	}
	niz[i]='\0';
}
int prva_rijec(char *s)
{
	char *kraj;
	int brojac=0, razmak=1;
	while(*s!='\0') {
		if(*s==' ') {
			razmak=1;
		} else if(razmak==1) {
			razmak=0;
			brojac++;
		}
		if(brojac==1) {
			kraj=s;
			while (*kraj!='\0' && *kraj!=' ') {
				kraj++;
			}
		}
		++s;
	}
	*kraj='\0';
	return brojac;
}
int main()
{

	return 0;
}
