#include<stdio.h>
#include<string.h>

int main()
{
	char *p;
	*p=strchr("Multinational",'n');
	printf("%s",p);
	p=strrchr("multinational",'n');
	printf("%s",p);
	return 0;
}
