#include <stdio.h>
void unesi(char niz[], int velicina)
{
    char znak = getchar ();
    if (znak=='\n') znak=getchar();
    int i=0;
    while (i<velicina-1 && znak!='\n') {
        niz[i]=znak;
        i++;
        znak=getchar();
    }
    niz[i]='\0';
}
int jel_razmak(char c)
{
    return !(c==' ' || c=='\n' || c=='\t');
}
char *whitespace(char* s)
{
    int razmak=1;
    char *poc=s;
    while(*s!='\0') {
        if (jel_razmak(*s)) razmak=1;
        else if(razmak==1) {
            razmak=0;
            char*p=s,*k=s;
            while(*k!='\0' && !(jel_razmak(*k)))
                ++k;
            if(s!=poc && *k!='\0')
                *p++=' ';
            while((*p++=*k++));
        }
        s++;
    }
    return poc;
}
int main()
{

    return 0;
}
