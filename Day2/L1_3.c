#include<stdio.h>
int sumofElements(int arr[], int n){
	int sum = 0;
	
	for(int i=0; i<n; i+=2){
		sum+=arr[i];
	}
	return sum;
	
}
int main(){
	int arr[]={10,20,30,40,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = sumofElements(arr,n);
	printf("Sum of alternate array is %d\n", result);
	return 0;
}
