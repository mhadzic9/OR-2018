#include <stdio.h>

int main() {
	double pMT,pVT,cMT,cVT,uMT,uVT,p,r;
	printf("\nUnesite potrosnju elektricne energije u kWh pri maloj tarifi i velikoj tarifi:");
	scanf("%lf %lf" , &pMT , &pVT);
	printf("\nUnesite cijenu potrosnje po kWh po maloj tarifi i velikoj tarifi:");
	scanf("%lf %lf" , &cMT , &cVT);

	
	p=pMT+pVT;
	uMT=pMT/p*100;
	uVT=pVT/p*100;
	r=pMT*cMT+pVT*cVT;
	
	printf ("\nUkupuna potrosnja je %.2f kWh" , p);
	printf("\nUdio male tarife u ukupnoj potrosnji je %.2f%%" , uMT);
	printf("\nUdio velike tarife u ukupnoj potrosnji je%.2f%%" , uVT);
	printf("\nUkupan racun za struju je:%.2f KM" , r);
	
	
	return 0;
}
