#include<stdio.h>
int main(){
	int percentage;
	printf(" Enter the percentage");
	scanf("%d", &percentage);
	if(percentage>=90 && percentage<100){
		printf("\n Grade A");
	}
	else if(percentage>=75 && percentage<89){
		printf("\n Grade B");
	}
	else if(percentage>=60 && percentage<74){
		printf("\n Grade C");
	}
	else if(percentage>=50 && percentage<59){
		printf("\n Grade D");
	}
	else{
		printf("\n Grade F");
	}
	return 0;
}
