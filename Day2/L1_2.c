#include<stdio.h>
void swap(void*a, void*b, size_t size){
	unsigned char* charA = (unsigned char*)a;
	unsigned char* charB = (unsigned char*)b;
	
	for(size_t i=0; i < size; i++){
	unsigned char temp = charA[i];
	charA[i] = charB[i];
	charB[i] = temp;
	}
}
int main(){
	int n1 = 10;
	int n2 = 20;
	printf("Before swap: n1=%d, n2=%d\n", n1,n2);
	swap(&n1, &n2, sizeof(int));
	printf("After the swap: n1=%d, n2=%d\n", n1,n2);
	
	double n3 = 3.14;
	double n4 = 6.28;
	printf("Before swap: n3=%f, n4=%f\n", n3,n4);
	swap(&n3, &n4, sizeof(double));
	printf("Before swap: n3=%f, n4=%f\n", n3,n4);
	
	return 0;
}
