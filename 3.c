//introduction of strings
//copy the strings without strcpy() function
#include <stdio.h>
void stringCopy(char *, const char *);
int main()
{
	char str1[100],str2[100];
	
	printf("Enter the str1:");
	scanf("%100[^\n]", str1);//enter 100 characters ,but not new line,
	//if new line, it means the end of the input string.
	
	//call the string copy function
	stringCopy(str2, str1);
	
	//output the str1 and str2
	printf("Str1:%s",str1);
	printf("\nStr2:%s",str2);
	return 0;
}
void stringCopy(char *str2, const char *str1)
{
	//copy the str1 to the str2
	while(*str2 = *str1)
	//assign the str1 pointer value to the str2 pointer	
	{
		//move the pointer value to the next by increasing the pointer address
		str1++;
		str2++;
	}
}
