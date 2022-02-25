#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char str2[10];
	printf("enter the two strings\n::");
	scanf("\n%s\n %s ",str1,str2);

	strcpy(str1,str2);

	printf("%s\n",str1);
	return 0;
}

	
