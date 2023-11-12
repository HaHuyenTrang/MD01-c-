#include <stdio.h>
int main(){
	int money,hoahong;
	printf("nhap vao doanh thu: ");
	scanf("%d", &money);
	if(money<=100000000){
		hoahong = money*5/100;
		printf("hoa hong dai ly: %d VND ",hoahong);
	}else if(money<=300000000){
		hoahong = money*10/100;
		printf("hoa hong dai ly: %d VND  ",hoahong);
	}else {
		hoahong = money*20/100;
		printf("hoa hong dai ly: %d VND ",hoahong);
	}
}
