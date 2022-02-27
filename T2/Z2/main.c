#include <stdio.h>
#define NSP1 90.0
#define NSP2 120.0
#define NDP1 60.0
#define NDP2 80.0
#define NP1 55.0
#define NP2 100.0

int main() {
	float SP,DP,P;
	printf("Dobrodosli kod Vaseg kucnog ljekara!\n");
	printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
	scanf("%f %f %f" , &SP , &DP , &P);
	if(SP>=NSP1 && SP<=NSP2) {
		printf("SP: normalan\n");
	} else {
		printf("SP: nije normalan\n");
	}
	if (DP>=60 && DP<=80) {
		printf("DP: normalan\n");
	} else {
		printf ("DP: nije normalan\n");
	}
	if (P>=55 && P<=100) {
		printf ("Puls: normalan");
	} else {
		printf("Puls: nije normalan");
	}
	return 0;
}
