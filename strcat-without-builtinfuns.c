#include<stdio.h>
int main()
{
	char str1[10];
	char str2[10];
	int i;
	int j;

	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);

	for(i=0;str1[i]!='\0';++i);
	
	{
		for(j=0;str2[j]!='\0';++j,++i)
		{
			str1[i]=str2[j];
		}
		str1[i]='\0';
	}
	printf("%s",str1);
	
}
