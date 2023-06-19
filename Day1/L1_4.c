#include<stdio.h>
int main(){
	char operators;
	double operand1, operand2;
	printf("Enter the operand1:");
	scanf("%lf", &operand1);
	printf("Enter the operator:");
	scanf("%s", &operators);
	printf("Enter the operand2:");
	scanf("%lf", &operand2);
	switch (operators){
		case '+':
		printf("%.1lf + %.1lf = %.1lf", operand1, operand2, operand1 + operand2);
		break;
		case '-':
		printf("%.1lf - %.1lf = %.1lf", operand1, operand2, operand1 - operand2);
		break;
		case '*':
		printf("%.1lf * %.1lf = %.1lf", operand1, operand2, operand1 * operand2);
		break;
		case '/':
		printf("%.1lf / %.1lf = %.1lf", operand1, operand2, operand1 / operand2);
		break;
		default:
		printf("Error! operator is not correct");
		
	}
	return 0;
}
