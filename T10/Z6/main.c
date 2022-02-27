#include <stdio.h>
char *tritacke(char *s)
{
	char *p=s;
	while (*s!='\0') {
		if(*s!=' ') {
			int j=1;
			while(*(s+j)!=' ' && *(s+j)!='.' && *(s+j)!='\0')
				j++;
			if(j>9) {
				int k=3;
				*(s+k)='.';
				k++;
				while (*(s+j)!='\0') {
					*(s+k)=*(s+j);
					k++;
					j++;
				}
				*(s+k)=*(s+j);
			}
		}
		s++;
	}
	return p;
}
int main()
{

	return 0;
}
