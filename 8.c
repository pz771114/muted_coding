//Introduction of pointer in c
#include <stdio.h>

int main()
{
	int number = 1;
	int *p; //*p is pointer
	p = &number; //p equals the address of number in the memory
	//any update on p will reflect on number
	
	printf("the addres of p: %x\n",p);//address value is hexidecimal value
	printf("the value of p: %d",*p);
	
	return 0;
}
