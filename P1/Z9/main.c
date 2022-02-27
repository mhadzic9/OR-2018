#include <stdio.h>

int main() {
    int i,n;
    printf ("Unesite broj n: ");
    scanf ("%d" , &n);
    if (n%2==1) i++;
    for (i=n ; i<n*n ; i+=2) {
    	printf ("%d\n" , i);
    }
	return 0;
}
