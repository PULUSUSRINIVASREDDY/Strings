#include<stdio.h>
int main()
{
	char str1[10];
	char str2[10];
	int i;

	printf("\n enter the string1:");
	scanf("%s",str1);

	for(i=0;str1[i]!='\0';++i)
	{
		str2[i]=str1[i];
	}
	str2[i]!='\0';
	printf("\n string2 is =%s",str2);
}

