#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];

	strncpy(str1,"thundersoft",10);////10 print 10 letters .......
	str1[10]='\0';      /// str1[5]='\0'; ->>not it prints only 10 letters

	printf("%s\n",str1);
}
