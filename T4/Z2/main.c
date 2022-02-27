#include <stdio.h>

int main()
{
	int i,j,a,b;
	printf ("Unesite stranice pravougaonika a,b: ");
	scanf ("%d,%d", &b, &a);
	for (i=0; i<a; i++) {
		for (j=0; j<b; j++) {
			if ((i==0 || i==a-1) && (j==0 || j==b-1)) {
				printf ("+");
			} else if (i==0 || i==a-1)
				printf ("-");
			else if (j==0 || j==b-1)
				printf ("|");
			else printf (" ");
		}
	printf ("\n");	
	}
	

return 0;
}
