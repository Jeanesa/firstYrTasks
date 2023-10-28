#include <stdio.h>

int main ()
{
	int arr [50], i, b;
	//inputing a value to array
	printf("How many element you want to enter? \n");
	scanf("%d",&b);
	
	printf("Enter %d Numbers to store in array \n",b);
	for(i=0; i<b; i++)
	{
		scanf("%d",&arr[i]);
	}
	//displaying a value of array
	printf("\n Element of the array are: \n");
	for(i=0; i<b; i++)
	{
		printf("Element of %d position is %d \n",i, arr[i]);
	}
}

