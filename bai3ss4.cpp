#include <stdio.h>
int main(){
	float oldNumber;
	printf("nhap gia tri old");
	scanf("%f", &oldNumber);
	float newNumber;
	printf("nhap gia tri new");
	scanf("%f", &newNumber); 
	float electricityNumber =  newNumber - oldNumber ;
	printf("so dien la: %f\n", electricityNumber);
	if(0<=electricityNumber && electricityNumber<50){
		printf("gia dien: 10.000"); 
	}else if(50<=electricityNumber && electricityNumber<100){
		printf("gia dien: 15.000");
	}else if(100<=electricityNumber && electricityNumber<150){
		printf("gia dien: 20.000");
	}else if(150<=electricityNumber && electricityNumber<200){
		printf("gia dien: 25.000");
	}else if(200<electricityNumber){
		printf("gia dien: 30.000");
	}else{
		printf("chua co gia dien"); 
	} 

} 
