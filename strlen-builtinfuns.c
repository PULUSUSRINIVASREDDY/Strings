#include<stdio.h>
//#include<string.h>   // we can or not string lib
int main()
{
	char str1[10];
	
	printf("enter the string length");
	scanf("%s",str1);

//	strlen(str1);
	printf("%u",strlen(str1));        // don't use the %s 
	return 0;
}
