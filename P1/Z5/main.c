#include <stdio.h>

int main() {
	int a;
	char b;
	printf ("Unesite znak kojim ce broj biti okruzen: ");
	scanf ("%c" , &b);
	printf ("Unesite prirodan broj u intervalu [0, 9]: ");
	scanf ("%d" , &a);
	printf ("\n%c%c%c%c%c" , b, b, b, b, b);
	printf ("\n%c%c%c%c%c" , b, b, b, b, b);
	printf ("\n%c %d %c" , b, a, b );
	printf ("\n%c%c%c%c%c" , b, b, b, b, b);
	printf ("\n%c%c%c%c%c" , b, b, b, b, b);
	return 0;
}
