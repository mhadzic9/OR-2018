#include <stdio.h>

int main() {
	float a,b,c,d;
	printf ("Unesite brojeve a,b,c,d: ");
	scanf("%f %f %f %f" , &a, &b, &c, &d);
	if (a<b && c<d) {
	if (b<c || a>d) {
	    printf ("Skupovi se ne sijeku.");
	}
	else if (a>=c && b<=d) {
	    printf ("Rezultantni interval je [%g,%g]." , a, b);
	} else if (c>=a && d<=b) {
	    printf ("Rezultantni interval je [%g,%g]." , c, d);
	} else if (a<=c && (b>=c && b<=d)) {
	    printf ("Rezultantni interval je [%g,%g]." , c, b);
	} else if ((a>=c && a<=d) && (b>=d)) {
	    printf ("Rezultantni interval je [%g,%g]." , a, d);
	}
  
	}
    return 0;
}
