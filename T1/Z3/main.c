#include <stdio.h>
#include <math.h>
int main() {
double x1,x2,y1,y2,z1,z2,d;
printf("Unesi koordinate tacke t1: \n");
scanf("%lf %lf %lf", &x1, &y1 ,&z1 );
printf("Unesi koordinate tacke t2:\n");
scanf("%lf %lf %lf", &x2, &y2, &z2);
d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
printf("\n Udaljenost izmedu tacaka t1 i t2 iznosi:%.5f", d);


	return 0;
}
