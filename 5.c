//introduction of strings
//concatenate two strings together without strcat() function

#include <stdio.h>
void strConcat(char *, char *);
int main()
{
	char str1[100],str2[100];
	
	printf("Enter the str1:");
	scanf("%99[^\n]", str1);
	
	getchar();
	
	printf("Enter the str2:");
	scanf("%99[^\n]", str2);
	
	//concat str1 with str2 function
	strConcat(str1, str2);
	
	printf("\nThe concated string is %s",str1);
	return 0;
}
void strConcat(char *str1, char *str2)
{
	while(*str1)
	{
		str1++;
		//loop through str1 to the end of strings
		//move the pointer to the end of address
	}
	
	while(*str1 = *str2)
	{
		str1++;
		str2++;
		//assign str2 pointer value to str1
		//move the pointer value to the next by increasing the pointer
	}
}

  