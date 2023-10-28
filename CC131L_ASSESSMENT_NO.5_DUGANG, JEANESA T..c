//From 1-7 display its corresponding days of the week

#include <stdio.h>
int main ()

{
	int i;
	
	printf("Enter a number from 1-7: ");
	scanf("%d",&i);
	
	if (i == 1) {
		printf("1 is equivalent to Monday");
	} 
	else if (i==2) {
		printf("2 is equivalent to Tuesday");
	} 
	else if (i==3) {
		printf("3 is equivalent to Wednesday");
	}
	else if (i==4) {
		printf("4 is equivalent to Thursday");
	}
	else if (i==5) {
		printf("5 is equivalent to Friday");
	}
	else if (i==6) {
		printf("6 is equivalent to Saturday");
	}
	else if (i==7) {
		printf("7 is equivalent to Sunday");
	}
	else {
		printf("%d is invalid number",i);
	}
	
	return 0;
}

