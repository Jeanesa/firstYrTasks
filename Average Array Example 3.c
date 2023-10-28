#include <stdio.h>
int main ()
{
	int arr[50], i, b, sum, average;
	printf ("How many element you want to enter? \n");
	scanf ("%d", &b);
	printf ("Enter %d numbers to store in arrat\n", b);
	for (i=1; i<=b; i++)
	{
	scanf ("%d", &arr[i]);
	sum = sum + arr[i];
	}
	average = sum/b;
	printf ("Average is %d", average);
}

