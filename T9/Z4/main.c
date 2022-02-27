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
char max_slovo(const char *s)
{
	int hist[100]= {0},i,imax='A';
	while(*s!='\0') {
		if(*s>='A' && *s<='Z') {
			hist[(int)*s]++;
		}
		if(*s>='a' && *s<='z') {
			hist[*s-32]++;
		}
		s++;
	}
	for(i='A'; i<='Z'; i++) {
		if (hist[i]>hist[imax])
			imax=i;
	}
	return imax;
}
int main()
{
	char s[100];
	unesi(s,100);
	printf ("%d",max_slovo(s));

	return 0;
}
