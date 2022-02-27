#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 100

int main() {
	int b;
	srand ((unsigned)time NULL);
	int pb=rand ()% MAX+MIN;
	printf ("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
	do {
		printf ("\nUnesite broj: ");
		scanf ("%d" , &b);
		if (b==-1) {
			printf ("Kraj igre.");
			break;
		}
		if (b<pb) {printf ("VECI");
	} if (b>pb) { printf ("MANJI");
	}
	if (b==pb) { printf ("JEDNAK");
	}
	}
	while (b!=pb);
	
	
	return 0;
}
