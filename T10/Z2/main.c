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
char* rot13(char* s)
{
    char* pok=s;
    while (*s!='\0') {
        if ((*s>='A' && *s<='M') || (*s>='a' && *s<='m')) {
            *s+=13;
        } else if((*s>='N' && *s<='Z') || (*s>='n' && *s<='z')) {
            *s-=13;
        }
        s++;
    }
    return pok;
}
int main()
{

    return 0;
}
