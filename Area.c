//MACHINE PROBLEM 1
//Write a Cprogram to calculate the area of a circle and display the result.

#include <stdio.h>

int main()
{
	float radius, area;
	
	printf("Enter a number for Radius: ");
	scanf("%f",&radius);
	
	area=3.1416*radius*radius;
	
	printf("The area of the Circle with the radius of %.2f is %.2f",radius, area);
	
return 0;
	
}
