//introduction of strings
//comparing two strings without strcmp() function

#include <stdio.h>
int strCompare(char *, char *);
int main()
{
	char str1[100], str2[100];
	
	printf("Enter the str1:");
	scanf("%99[^\n]", str1);
	
	getchar();
	
	printf("Enter the str2:");
	scanf("%99[^\n]", str2);
	
	//compare the str1 and str2
	int difference;
	difference = strCompare(str1, str2);
	
	switch(difference)
	{
		case 0:
			printf("Str1 equals str2");
			break;
		case 1:
			printf("Str1 is greater than str2");
			break;
		case -1:
			printf("Str1 is less than str2");
			break;
		default:
			printf("Unable to compare");
			break;
	}
	
	return 0;
}

int strCompare(char *str1, char *str2)
{
	int difference;
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0' && str1[i] == str2[i])
	{
		//loop through str1 and str2
		//until it reaches the end of string '\0'
		//keep looping if str1 matches str2
		//end loop if str1 doesn't match str2
		i++;
	}
	
	difference = str1[i] - str2[i];
	
	if(difference ==0)
	{
		//it means str1 equals str2
		return 0;
	}else if(difference > 0)
	{
		//it means str1 is greater than str2
		return 1;
	}else
	{
		//difference < 0
		//it means str1 is less than str2
		return -1;
	}
	
	return difference;
}
