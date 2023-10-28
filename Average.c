//MACHINE PROBLEM 2
//Write a C program that computes the average of three input quizzes, then display the result.

#include <stdio.h>

int main()
{
	int quiz1;
	int quiz2;
	int quiz3;
	float sum;
	float average;
	
	printf("Enter the score for Quiz 1: ");
	scanf("%d",&quiz1);
	printf("Enter the score for Quiz 2: ");
	scanf("%d",&quiz2);
	printf("Enter the score for Quiz 3: ");
	scanf("%d",&quiz3);
	
	sum = quiz1 + quiz2 + quiz3;
	average = sum/3;
	
	printf("The Average Quiz for %d, %d, and %d is %.2f.",quiz1, quiz2, quiz3, average);
	
	return 0;
}

