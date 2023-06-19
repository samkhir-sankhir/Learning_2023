#include<stdio.h>
int countofBits(unsigned int a){
	int count = 0;
	while(a>0){
		count += a & 1;
		a >>= 1;
	}
	return 0;
}
int totalofBits(unsigned int arr[], int n){
	int total = 0;
	for(int i = 0; i < n; i++){
		total += countofBits(arr[i]);
	}
	return total;
}
int main(){
	unsigned int arr[] = {0x1, 0xF4, 0x10001};
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = totalofBits(arr, n);
	printf("Total number of set bits: %d\n", result);
	return 0;
}
