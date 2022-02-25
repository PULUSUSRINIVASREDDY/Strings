#include<stdio.h>
int main()
{
	char str1[10]="thunder";
	char str2[10]="soft";

	int i,j;
	for(i=0;str1[i]!='\0';++i);
	{
		for(j=0;str2[j]!='\0';++j,i++)
		{
			str1[i]=str2[j];
		}
		str1[i]='\0';

		printf("%s",str1);
	}
}
