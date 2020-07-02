//Bubble Sorting algorithm in C
//Sort the arry [5,4,3,2,1] to [1,2,3,4,5]
#include <stdio.h>
void bubbleSort(int *);

int main()
{
	int arr[] = {5,4,3,2,1};
	bubbleSort(arr);
	
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

void bubbleSort(int *arr)
{
	int i,j,swap;
	for(i=5;i>0;i--)
	{
		swap = 0;
		
		for(j=0;j<i-1;j++)
		{
			if(arr[j]>arr[j+1])
				//swap
				{
					swap = 1;
					int temp;
					temp = arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		}
		if(!swap) break;
	}
}