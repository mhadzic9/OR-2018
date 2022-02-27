#include <stdio.h>

int main() {
	int i,n;
	printf ("Unesite broj: ");
	scanf ("%d" , &n);
    while (n<=0) {
    	printf ("Broj nije prirodan.");
    	break;
    }
    while (n==1) {
    	printf ("Broj nije ni prost ni slozen.");
    	break;
    }
    for (i=2; i<n; i++) {
    	if (n%i==0) {
    printf ("Broj je slozen.");
    break;
    
    	}		
    	}
    
    if (i==n) {
    	printf ("Broj je prost.");
    
    return 0;
}
}
