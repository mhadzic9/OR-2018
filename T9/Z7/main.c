#include <stdio.h>
int strcmpi(const char* s1, const char* s2, int velikamala)
{
	while(*s1!='\0' && *s2!='\0') {
		if(*s1>*s2) {
			if(*s1==*s2+32 && velikamala==0) {
				s1++;
				s2++;
				continue;
			}
			return 1;
		}
		if(*s1<*s2) {
			if(*s2==*s1+32 && velikamala==0) {
				s1++;
				s2++;
				continue;
			}
			return -1;
		}
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

	return 0;
}
