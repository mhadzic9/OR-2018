#include <stdio.h>
#define PI 3.14
int main() {
	float a,b,c,r,H,M,P,V,V1,Pk,Vk;
	printf("\nUnesite stranice kvadra:");
	scanf("%f %f %f", &a, &b, &c);
	printf("Unesite poluprecnik i visinu:");
	scanf("%f %f", &r, &H);
	P=2*(a*b+b*c+a*c);
	V=a*b*c;
	M=H*2*r*PI;
	Pk=P+M;
	V1=r*r*PI*H;
	Vk=V+V1;
	printf ("\nPovrsina tijela sa slike je:%.3f cm2" , Pk);
	printf("\nZapremina tijela sa slike je:%.3f cm3" , Vk);
	
	
	
	return 0;
}
