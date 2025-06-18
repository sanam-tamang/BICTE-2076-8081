
//3. Find odd and even number using function

#include <stdio.h>
void evenOdd(int num){
	if(num%2==0){
		printf("The number %d is even number ",num);
	}else{
		printf("The number %d is odd number ",num);
	}
	
}
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	evenOdd(num);
	return 0;
	
}
