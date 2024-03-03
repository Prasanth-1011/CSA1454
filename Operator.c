#include <stdio.h>

int main() {
	char input;
	printf("Enter Any Operator : ");
	scanf("%c", &input);
	switch(input) {
		case '+':
			printf("The User Has Inputted Addition Operator");
			break;
		case '-':
			printf("The User Has Inputted Subtraction Operator");
			break;
		case '*':
			printf("The User Has Inputted Multiplication Operator");
			break;
		case '/':
			printf("The User Has Inputted Division Operator");
			break;
		case '%':
			printf("The User Has Inputted Modulus Operator");
			break;
		default:
		    printf("Unknown Operator");
		    break;
	}
	return 0;
}