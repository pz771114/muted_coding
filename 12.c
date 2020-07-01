//Binary search divide and conquer algorithm in C
//Find out how many times does a string repeat in another string 
#include <stdio.h>
#include <string.h>
int searchString(const char s1[], const char s2[]);
int main()
{
	char s1[]="hello world hello again",s2[]="hello";
	int counter=0;
	counter = searchString(s1, s2);
	printf("String 2 repeats %d times in string 1",counter);
	return 0;
}
int searchString(const char s1[], const char s2[])
{
	//this function returns a integer value which how many times does string 2 repeat in string 1
	
	int i,j,counter=0;
	//first loop through string 1
	for(i=0;i<strlen(s1);i++)//string 1 loop
	{
		//second loop through string 2
		for(j=0;j<strlen(s2);j++)//string 2 loop
		{
			//check if str2 and str1 characters match
			//if not match, break out the string 2 loop, return to string 1 loop
			if(s2[j] !=s1[i+j])
			{
				break;
			}
			//if character matches, keep going and check the next character
			//if the string 2 reaches the end, increase the counter value by one
			if(j==strlen(s2)-1){ counter++;}
		}
	}
	
	return counter;
}