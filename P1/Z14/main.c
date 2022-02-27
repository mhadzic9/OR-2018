#include <stdio.h>

int main() {
    int i,j,n;
    scanf ("%d" , &n);
    for (i=1;i<=n;i-=2) {
    	for (j=1;j<n;j-=2) {
    		printf ("*");
    	}
    }
	return 0;
}
