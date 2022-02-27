#include <stdio.h>

int main()
{
    int S=3,M=3,B=3,i;
    char p1,p2,p3;
    float t1,t2,t3;
    printf ("\nUnesite prognozu za Sarajevo:");
    printf ("\nTemperatura: ");
    scanf ("%f", &t1);
    printf ("Padavine (D/N): ");
    scanf ("%c", &p1);
    for (i=0;;) {
        scanf ("%c", &p1);
        if (p1=='d' || p1=='D' || p1=='n' || p1=='N') {
            break;
        }
        if((i>0) && (p1!='d' || p1=='D' || p1!='n' || p1!='N')) {
            printf ("Pogresan unos. \nPadavine (D/N): ");
        }
        i++;
    }
    printf ("Unesite prognozu za Mostar:\n");
    printf ("Temperatura: ");
    scanf ("%f", &t2);
    printf ("Padavine (D/N): ");
    scanf ("%c", &p2);
    for (i=0;;) {
        scanf ("%c", &p2);
        if (p2=='d' || p2=='D' || p2=='n' || p2=='N') {
            break;
        }
        if ((i>0) && (p2!='d' || p2!='D' || p2!='n' || p2!='N')) {
            printf ("Pogresan unos. \nPadavine (D/N): ");
        }
        i++;
    }
    printf ("Unesite prognozu za Bihac:\n");
    printf ("Temperatura: ");
    scanf ("%f", &t3);
    printf ("Padavine (D/N): ");
    scanf ("%c", &p3);
    for (i=0;;) {
        scanf ("%c", &p3);
        if (p3=='d' || p3=='D' || p3=='n' || p3=='N') {
            break;
        }
        if ((i>0) && (p3!='d' || p3!='D' || p3!='n' || p3!='N')) {
            printf ("Pogresan unos. \nPadavine (D/N): ");
        }
        i++;
    }
    if ((p1=='d' || p1=='D') && (t1>0))S--;
    if ((p2=='d' || p2=='D') && (t2>0))M--;
    if ((p3=='d' || p3=='D') && (t3>0))B--;
    if (t1<-5 || t1>30)S--;
    if (t2<-5 || t2>30)M--;
    if (t3<-5 || t3>30)B--;
    if ((p1=='d' || p1=='D') || (t1>5 && t1<=20))S--;
    if ((p2=='d' || p2=='D') || (t2>5 && t2<=20))M--;
    if ((p3=='d' || p3=='D') || (t3>5 && t3<=20))B--;
    if (S==3) {
        printf ("Drugarice idu u Sarajevo.");
        return 0;
    }
    if ((S<3) && (M==3)) {
        printf ("Drugarice idu u Mostar.");
        return 0;
    }
    if ((S<3) && (M<3) && (B==3)) {
        printf ("Drugarice idu u Bihac.");
        return 0;
    } else if (S==2 && ((p1=='n' || p1=='N') || ((p1=='d' || p1=='D') && t1<=0)) && (t1>=-5 && t1<=30)) {
        printf ("Anja i Elma mogu u Sarajevo.");
        return 0;
    } else if (S<2 && M==2 && ((p2=='n' || p2=='N') || ((p2=='d' || p2=='D') && t2<=0)) && (t2>=-5 && t2<=30)) {
        printf ("Anja i Elma mogu u Mostar.");
        return 0;
    } else if (S<2 && M<2 && B==2 && ((p3=='n' || p3=='N') || ((p3=='d' || p3=='D') && t3<=0)) && (t3>=-5 && t3<=30)) {
        printf ("Anja i Elma mogu u Bihac.");
        return 0;
    } else if (S==2 && (!((p1=='d' || p1=='D') && (t1>0) && (t1>5 && t1<20)))) {
        printf ("Anja i Una mogu u Sarajevo.");
        return 0;
    } else if (S<2 && M==2 && (!((p2=='d' || p2=='D') && (t2>0) && (t2>5 && t2<20)))) {
        printf ("Anja i Una mogu u Mostar.");
        return 0;
    } else if (S<2 && M<2 && B==2 && (!((p3=='d' || p3=='D') && (t3>0) && (t3>5 && t3<20)))) {
        printf ("Anja i Una mogu u Bihac.");
        return 0;
    } else if (S==2 && ((t1>-5 && t1<5) || (t1>20 || t1<30))) {
        printf ("Elma i Una mogu u Sarajevo.");
        return 0;
    } else if (S<2 && M==2 && ((t2>-5 && t2<5) || (t2>20 && t2<30))) {
        printf ("Elma i Una mogu u Mostar.");
        return 0;
    } else if (S<2 && M<2 && B==2 && ((t3>-5 && t3<5) || (t3>20 && t3<30))) {
        printf ("Elma i Una mogu u Bihac");
        return 0;
    } else if (S<2 && M<2 && B<2) printf ("Ne odgovara niti jedan grad.");


    return 0;
}
