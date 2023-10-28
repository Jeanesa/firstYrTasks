#include <stdio.h>
int main ()
{
	int arr[50],i,b,sum=0;
	printf("How many element you want to enter? \n");
	scanf("%d",&b);
	printf("Enter %d Numbers to store in array \n",b);
	for(i=0; i<b; i++)
	{
		scanf("%d",&arr[i]);
		sum=sum + arr[i];
	}
	printf("The sum of all the number is %d", sum);
}

