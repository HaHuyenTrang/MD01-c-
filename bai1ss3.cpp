#include <stdio.h>
int main(){
	//khai bao ban kinh r 
	int r;
	printf("nhap gia tri ban kinh r");
	scanf("%d", &r);
	//khai bao pi
	const float Pi = 3.14;
	//tinh chu vi va dien tich
	float acreage = 2*Pi*r; 
	float perimeter = Pi*r*r;
	//in ra chu vi va dien tich 
	printf("chu vi hinh tron la %.2f\n " , acreage);
	printf("dien tich hinh tron la %.2f\n",perimeter);
	return 0;
	 
	
} 
