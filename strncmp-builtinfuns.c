#include<stdio.h>
#include<string.h>
int main()
{

	char str1[100];
	char str2[100];
	strcpy(str1,"HELLOWORLD");
	strcpy(str2,"HELLO");
	if(strncmp(str1,str2,3))
	{

         printf("SAME\n");
	}
	else
	{

           	printf("NOT SAME\n");
	
	}
	return 0;
}
