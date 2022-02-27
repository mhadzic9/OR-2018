#include <stdio.h>
void unesi (char niz[],int velicina)
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
int pocetak(const char *s)
{
	if(*s!='/') return 0;
	s++;
	return *s=='*' || *s=='/';
}
int kraj(const char *c,int single)
{
	if (single==1)
		return *c=='\n' || *c=='\0';
	if(*c!='*') return 0;
	c++;
	return *c=='/';
}
char *ukloni_komentare(char *s)
{
	char *poc=s;
	while (*s!='\0') {
		if (pocetak(s)==1) {
			char*p=s,*k=s+2;
			int single=*(s+1)=='/';
			while(*k!='\0' && !kraj(k,single))
				k++;
			if(*k!='\0' || single==1) {
				if(!single) {
					k+=2;
				}
				while((*p++=*k++));
				s--;
			}
		}
		s++;
	}
	return poc;
}
int main()
{

	return 0;
}
