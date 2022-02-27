#include <stdio.h>
void zamijeni(int *a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;

}
int main()
{
	int a,b;
	printf ("Unesite a i b: ");
	scanf ("%d %d", &a,&b);
	printf ("Nakon zamjene: %d %d",a,b);
	return 0;
}
