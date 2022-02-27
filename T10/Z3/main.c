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
    return !((c>='A' && c<='Z') || (c>='a' && c<='z'));
}
char* izbaci_rijec(char* s,int n)
{
    int br=0,razmak=1;
    char *pok=s;
    while (*s!='\0') {
        if(jel_razmak(*s)==1) razmak=1;
        else if(razmak==1) {
            razmak=0;
            br++;

            if(br==n) {
                char *p=s,*k=s;
                while(*k!='\0' && !(jel_razmak(*k)))
                    ++k;
                while((*p++=*k++));
            }
        }
        s++;
    }
    return pok;
}


int main()
{

    return 0;
}
