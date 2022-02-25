#include<stdio.h>
int main()
{
	char str1[10]="thunder";
	char str2[10]="soft";
	int i;
	
	for(i=0;str1[i]!='\0';++i)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("%s",str2);
}
