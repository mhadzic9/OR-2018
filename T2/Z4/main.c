#include <stdio.h>

int main() {
	int a,b,c;
	printf("Unesite tri broja: ");
	scanf("%d %d %d", &a , &b , &c);
	if ((a<50 || a>200) || (b<50 || b>200) || (c<50 || c>200)) {
	    printf ("Svi brojevi nisu iz intervala 50 do 200");
	    return 1;
	}
	    
	
    
    if (a>=b && b>c) {
    	printf ("Brojevi poredani po velicini glase: %d,%d,%d ", c,b,a);
    } else if (a>=c && c>=b) {
    	printf ("Brojevi poredani po velicini glase: %d,%d,%d ", b,c,a);
    } else if (b>a && a>c) {
    	printf ("Brojevi poredani po velicini glase: %d,%d,%d ", c,a,b);
    } else if (b>=c && c>=a) {
    	printf ("Brojevi poredani po velicini glase: %d,%d,%d", a,c,b);
    } else if (c>a && a>b) {
    	printf ("Brojevi poredani po velicini glase: %d,%d,%d", b,a,c);
    } else if (c>b && b>=a) {
    	printf ("Brojevi poredani po velicini glase: %d,%d,%d", a,b,c);
    } 
    
    if (a==b && b==c) {
        printf ("\nUnesen je 1 razlicit broj");
    }
     if (a==b && b!=c) {
        printf ("\nUnesena su 2 razlicita broja");
     }
     if (a!=b && b==c) {
        printf ("\nUnesena su 2 razlicita broja");
     }
     if (a!=b && a==c) {
         printf ("\nUnesena su 2 razlicita broja");
     }
     if (a!=b && a!=c && b!=c) {
         printf ("\nUnesena su 3 razlicita broja");
     
    } 
    
    return 0;
} 
	

