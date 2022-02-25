// string length without using builtim function //


// input has str1

#include<stdio.h>
int main()
{
	char str1[10];
	int i;

	printf("\n Enter the string:");
	scanf("%s",str1);

	/*
	
	 warning when use & ope because of strings directly gives the addess 
	  of the first eleement  of the string array
	
	*/
	for(i=0;str1[i]!='\0';i++);          // check without semicolon
	{
		printf("\nlength of the string is=%d",i);
	}
}

