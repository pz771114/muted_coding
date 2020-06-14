//introduction of strings
//calculate the string length without strlen() function
#include <stdio.h>
int strLen(const char []);
int main()
{
	char str1[6]={'a','b','c','d','e','\0'};//the last character \0 indicates the end of string, otherwise the C compiler doesn't know the string where to ends.
	char str2[20];
	
	//first, output the characters of the str1
	printf("str1:");
	for(int i=0;str1[i]!='\0';i++)
	{
		printf("%c", str1[i]);
	}
	printf("\nEnter str2:");
	//second, user enters a string and display it
	gets(str2);
	puts(str2);
	//getchar();
	//third, write a function to calculate the string length
	printf("The length of str1 is: %d\n",strLen(str1));
	printf("The length of str2 is: %d\n",strLen(str2));
	return 0;
}

int strLen(const char str[])
{
	int n=0;
	
	while(str[n]!='\0')
	{
		n++;
	}
	
	return n;
}
