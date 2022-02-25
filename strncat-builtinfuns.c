#include<stdio.h>
#include<string.h>
int main()
{


	char str1[100]="THUNDERugkyf,jmdhfcgj";
	//char str1[10]="THUNDERugkyf,jmdhfcgj"; 
	// i given size 10 but 10+4 words that time it comes  stack smatchs 

	strncat(str1,"SOFTEEEEEEE",4);

	printf("%s\n",str1);
	return 0;
}
