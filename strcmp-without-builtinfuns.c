#include<stdio.h>
int main()
{
	char str1[10];
	char str2[10];

	int i;

	printf("enter the strings");
	scanf("%s %s ",str1,str2);
	for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++)
	{
		if(str1[i]<str2[i])
		{
			printf("str1 is less than equal to str2");
		}
		if(str1>str2)
		{
			printf("str1 is qreater than equal to str2");
		}
		else
		{
			printf("str1 is equal to str2");
		}
	}
}
