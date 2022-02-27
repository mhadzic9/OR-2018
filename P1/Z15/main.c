#include <stdio.h>

int main() {
    int a,b,c;
    printf ("Unesite tri broja: ");
    scanf ("%d %d %d" , &a, &b, &c);
    if ((a<50 || a>200) || (b<50 || b>200) || (c<50 || c>200)) {
        printf ("Svi brojevi nisu iz intervala 50 do 200.");
    }
    return 1; 
    
    if (a>b && b>c && a>c) {
        printf ("Brojevi poredani po velicini glase: %d %d %d" , c, b, a);
    }
    
	return 0;
}

