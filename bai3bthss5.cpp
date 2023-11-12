#include <stdio.h>
int main(){
	int minute, price;
	printf("nhap vao so phut");
	scanf("%d", &minute);
	int expense = 25000;
	if(0<minute && minute<51){
	   price = expense + 600;
	   printf("gia cuoc cuoc goi: %d VND", price); 
	}else if(50<minute && minute<151){
	   price = expense + 1000;
	   printf("gia cuoc cuoc goi: %d VND", price);	
	}else if(151<minute && minute<201){
	   price = expense + 1200;
	   printf("gia cuoc cuoc goi: %d VND", price);
    }else if(200<minute){
	   price = expense + 1210;
	   printf("gia cuoc cuoc goi: %d VND", price);
    }
} 
