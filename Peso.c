//MACHINE PROBLEM 3
//Write a program that converts the input dollar to its peso exchange rate equivalent. 
//Assume thatthe present exchange rate is 51.50 pesos against the dollar. 

#include <stdio.h>

int main()
{
	int dollars;
	float peso;
	
	printf("Enter how much dollor you have: ");
	scanf("%d",&dollars);
	
	peso = 51.50*dollars;
	
	printf("%d dollars is equivalent to %.2f pesos", dollars, peso);
	
	return 0;
}


