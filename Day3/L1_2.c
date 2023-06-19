#include<stdio.h>
void printbits(unsigned int a){
	int i;
	unsigned int s = 1<< 31;
	for(i = 0; i < 32; i++){
		if(a & s){
			printf("1");
		}
		else{
			printf("0");
		}
		s >>= 1;
	}
	printf("\n");
}
 int main(){
 	unsigned int a;
 	printf("Enter a 32-bit integer:");
 	scanf("%u", &a);
 	
 	printf("Bits: ");
 	printbits(a);
 	
 	return 0;
 }
