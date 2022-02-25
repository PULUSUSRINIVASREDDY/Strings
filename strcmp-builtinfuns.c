#include<stdio.h>
//#include<string.h>  //// without lib funs .........
int main()
{
	char str1[10];
	char str2[10];
	
	printf("enter  the two  strings:");
	scanf("%s %s",str1,str2);

	if((strcmp(str1,str2))==0)
	{
		printf("TWO STRINGS ARE SAME");
	}
	else
	{
		printf("TWO STRINGS ARE NOT SAME");
	}
}
