#include <stdio.h>
int main(){
	//nhap 3 so nguyen
	int number1, number2, number3;
	printf("nhap 3 so nguyen");
	scanf("%d %d %d", &number1, &number2, &number3);   
	//khai bao min, max
	int max = number1;
	int min = number1;
	if(max < number2 ){
	max = number2;
}
	if(max < number3 ){
	max = number3;
}
	if(min > number2 ){
	min = number2;
}
	if(min > number3 ){
	min = number3;
}
	printf("in ra gia tri max: %d\n ",max);
	printf("in ra gia tri min: %d",min); 
	 
} 
