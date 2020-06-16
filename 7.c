//introduction of strings
//shifting characters in a string one position to the left
#include <stdio.h>

int main()
{
	char str[6]="abcde";
	//abcde plus the ending character \0 equals six characters
	int i=0;
	
	printf("String before shifting: %s\n",str);
	while(str[i]!='\0') //character \0 is the last character in the string
	{
		str[i] = str[i+1];
		i++;
	}
	
	printf("String after shifting: %s",str);
	return 0;
}
