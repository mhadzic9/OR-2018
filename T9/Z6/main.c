#include <stdio.h>
int strcmp(const char* s1,const char* s2)
{
	while (*s1!='\0' && *s2!='\0') {
		if(*s1<*s2)
			return -1;
		if(*s1>*s2)
			return 1;
		s1++;
		s2++;
	}
	if(*s1!='\0')
		return 1;
	if(*s2!='\0')
		return -1;
	return 0;
}
int main()
{
	char s1[3]= {'a','b','c'}, s2[5]= {'a','b','b'};
	printf ("%d",strcmp(s1,s2));

	return 0;
}
