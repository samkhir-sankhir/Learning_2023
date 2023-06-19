#include<stdio.h>
int main(){
	int num1, num2;
	printf("Enter the values of two different numbers:");
	scanf("%d %d", &num1, &num2);
	if(num1>num2){
	printf("%d is the largest", num1);
	}
	else if(num1<num2){
	printf("%d is the largest", num2);
	}
	else{
	printf("both the numbers are equal");
	}
	return 0;
}
