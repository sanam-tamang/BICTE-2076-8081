
#include <stdio.h>
///program of prime number
void main(){
	int num;
	printf("Enter number to check if it is prime");
	scanf("$d", &num);
	int tempNum = num;
	int i = 1;
	int count = 0;
	
	while(i<=num){
		
		
		
	
		if(num%i == 0){
			///if number i perfectly divides the number 
			///here i we have iterating through from 1 
			count++;
			printf("counting here");
			
		}
		
	i++;
		
		
	}
	
		if(count == 2){
			printf("prime number");
		}else{
			printf("constant number");
		}
	
}
