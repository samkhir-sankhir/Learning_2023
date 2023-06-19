 #include<stdio.h>
 int largestNumber(int num){
 	int largest =0;
 	int multiplier = 1;
 	
 	while(num > 0 ){
 		int digit = num % 10;
 		int temp = (num / 10) * multiplier +digit;
 		
 		if(temp > largest){
 			largest = temp;
 		}
 		multiplier *= 10;
 		num /= 10;
 	}
 	return largest;
 }
 
 int main(){
 	int num;
 	printf("Enter a 4-digit number:");
 	scanf("%d", &num);
 	int remainingNumber = largestNumber(num);
 	printf("THe largest number remaining : %d\n", remainingNumber);
 	return 0;
 }
