#include<stdio.h>
void printExponent(double num){
	unsigned long long* ptr = (unsigned long long*)&num;
	unsigned long long exponent = (*ptr >> 52) & 0x7FF;
	printf("Exponent in hexadecimal: 0x%llx\n", exponent);
	printf("Exponenet in binary:");
	for(int i = 11; i >= 0; i--){
		unsigned long long bit = (exponent >> i) & 1;
		printf("%lld", bit);
	}
	printf("\n");
}
int main(){
	double x = 0.7;
	printExponent(x);
	return 0;
}
