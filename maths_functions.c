#include <stdio.h>

int add(int x, int y){
	return (x+y);
}

int subtract(int x,int y){
	return (x-y);
}

int multiply(int x,int y){
	return (x*y);
}

int main(){
	int number1, number2;
	char option;
	
	printf("Enter a number: ");
	scanf(" %i",&number1);
	printf("\nEnter another number: ");
	scanf(" %i",&number2);
	
	printf("\n\n(a)dd, (s)ubtract, (m)ultiply, (d)ivide?\n");
	scanf(" %c",&option);
	
	printf("Result: ");
	switch(option){
	case 'a'	: printf("%i\n",add(number1,number2)); break;
	case 's'	: printf("%i\n",subtract(number1,number2)); break;
	case 'm'	: printf("%i\n",multiply(number1,number2)); break;
	case 'd'	:
	default		: printf("You have failed to choose a valid option.");
	}
	return 0;
}
