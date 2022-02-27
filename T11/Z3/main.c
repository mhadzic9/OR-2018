#include <stdio.h>
#include <math.h>
#define PI 4.0*atan(1)
/* Definicija tacke i kruznice */
struct Tacka {
    double x,y;
};
struct Kruznica {
    struct Tacka centar;
    double poluprecnik;
};
struct Pravougaonik {
    struct Tacka gore_desno;
    struct Tacka dole_lijevo;
    struct Tacka dole_desno;
};

/* Funkcije za unos */
struct Tacka unos_tacke()
{
    struct Tacka t;
    printf ("Unesite koordinate tacke (x, y): \n");
    scanf ("%lf,%lf", &t.x, &t.y);
    return t;
}

struct Kruznica unos_kruznice()
{
    struct Kruznica k;
    printf ("Unesite centar kruznice:\n");
    k.centar = unos_tacke();
    printf ("Unesite poluprecnik kruznice:\n");
    scanf("%lf", &k.poluprecnik);
    return k;
}
struct Pravougaonik unos_pravougaonika()
{
    struct Pravougaonik p;
    printf ("Unesite koordinate donje lijeve tacke:\n");
    p.dole_lijevo=unos_tacke();
    printf ("Unesite koordinate gornje desne tacke:\n");
    p.gore_desno=unos_tacke();
    return p;
}

/* Funkcija za udaljenost izmedju dvije tacke */
float udaljenost(struct Tacka t1, struct Tacka t2)
{
    return sqrt( (t1.x-t2.x)*(t1.x-t2.x) + (t1.y-t2.y)*(t1.y-t2.y) );
}
float obim_kruznice(struct Kruznica k)
{
    return 2*PI*k.poluprecnik;
}
float povrsina_kruznice(struct Kruznica k)
{
    return PI*k.poluprecnik*k.poluprecnik;
}
float obim_pravougaonika(struct Pravougaonik p)
{
    struct Tacka dole_desno;
    dole_desno.x=p.gore_desno.x;
    dole_desno.y=p.dole_lijevo.y;
    double a=udaljenost(p.dole_lijevo,dole_desno);
    double b=udaljenost(dole_desno,p.gore_desno);
    return 2*a+2*b;
}
float povrsina_pravougaonika(struct Pravougaonik p)
{
    struct Tacka dole_desno;
    dole_desno.x=p.gore_desno.x;
    dole_desno.y=p.dole_lijevo.y;
    double a=udaljenost(p.dole_lijevo,dole_desno);
    double b=udaljenost(dole_desno,p.gore_desno);
    return a*b;
}
int tacka_u_pravougaoniku(struct Tacka t,struct Pravougaonik p)
{
    if(t.x>p.gore_desno.x || t.x<p.dole_lijevo.x || t.y>p.gore_desno.y || t.y<p.dole_lijevo.x) return 0;
    else return 1;
}

/* Glavni program: Da li je tacka unutar kruznice */
int main()
{
    struct Kruznica k;
    struct Tacka t;
    struct Pravougaonik p;
    double d;
    printf ("Unesite kruznicu:\n");
    k = unos_kruznice();
    printf ("Unesite neku tacku:\n");
    t = unos_tacke();

    /* Tacka se nalazi unutar kruznice ako je udaljenost tacke od centra
    kruznice manja od poluprecnika kruznice */
    d = udaljenost(t, k.centar);
    if (d<k.poluprecnik)
        printf("Tacka je unutar kruznice.");
    else if (d==k.poluprecnik)
        printf("Tacka je na kruznici.");
    else
        printf("Tacka je izvan kruznice.");
    printf ("Obim kruznice: %.3f\n",obim_kruznice(k));
    printf ("Povrsina kruznice: %.3f\n", povrsina_kruznice(k));
    printf ("Obim pravougaonika: %.3f\n", obim_pravougaonika(p));
    printf ("Povrsina pravougaonika: %.3f\n", povrsina_pravougaonika(p));
    return 0;
}
