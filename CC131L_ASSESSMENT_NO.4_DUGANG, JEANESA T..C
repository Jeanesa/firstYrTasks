#include <stdio.h>
int main ()
{
	int num1;
	int num2;
	int sum;
	int difference;
	int product;
	int quotient;
	
	printf("Enter a number for num1: ");
	scanf("%d",&num1);
	printf("Enter a number for num2: ");
	scanf("%d",&num2);
	sum=num1 + num2;
	difference = num1 - num2;
	product = num1*num2;
	quotient = num1/num2;
	
	printf("The sum of %d and %d is %d \n",num1, num2, sum);
	printf("The difference of %d and %d is %d \n",num1, num2, difference);
	printf("The product of %d and %d is %d \n",num1, num2, product);
	printf("The quotient of %d and %d is %d \n",num1, num2, quotient);
	
	return 0;
}
