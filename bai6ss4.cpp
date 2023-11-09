#include <stdio.h>
int main(){
	int number1,number2,number3,arrange;
	printf("Nhap vao 3 so ");
	scanf("%d %d %d",&number1,&number2,&number3);
	int max = number1;
	int min = number1;
    if(number1>number2){
    	number2=arrange; number1=number2; arrange=number1;
	}
	if(number1>number3){
		number3=arrange; number1=number3; arrange=number1;
	}
	if(number2>number3){
		number3=arrange; number2=number3; arrange=number2;
	}
	printf("Day so giam dan %d %d %d\n", number3, number2, number1);
}
	
