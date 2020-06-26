//Print half Pyramid pattern in c
/*
1
1 2 
1 2 3 
1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
	int i,j,rows = 5;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			//printf("%d ",j); //output number after space
			//we change the number to other pattern like *
			printf("* ");//* after space
			
		}
		
		printf("\n"); //newline break;
	}
	
	return 0;
}
