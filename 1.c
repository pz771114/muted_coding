//find the sum of all numbers from 1 to N (including N)

#include <stdio.h>
void sum(int n);
int main()
{
	sum(5);
	return 0;
}

void sum(int n)
{
	//first method
	int sum = 0;
	int i;
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
	}
	printf("Sum of n is %d\n", sum);
	
	//second method
	int sum2=0;
	sum2 = n*(n+1) /2;
	printf("Sum2 of n is %d", sum2);
	
}