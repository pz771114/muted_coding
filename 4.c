//introduction of strings
//scanf(),This function or variable may be unsafe.
//Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.

#include <stdio.h>

int main()
{
	char str1[100], str2[100];
	
	printf("Enter the str1:");
	scanf("%99[^\n]", str1);
	//enter 99 characters plus the end charachter \0 = 100 characters
	//[^\n] regular express, not new line
	printf("Str1:%s",str1);
	
	getchar();//clear the input buffer, otherwise, the next scanf will skip with new line
	printf("\nEnter the str2:");
	scanf("%99[^\n]", str2);
	printf("Str2:%s",str2);
	return 0;
}
