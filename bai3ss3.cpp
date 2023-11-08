#include <stdio.h>
int main (){
	//khai bao bien luu tru diem toan va van anh 
	float toan; 
	printf ("diem toan");
	scanf("%f", &toan);
	float van; 
	printf ("diem van");
	scanf("%f", &van);
	float anh; 
	printf ("diem anh");
	scanf("%f", &anh);
	// tinh tong 3 mon
	float tong = toan + van + anh;
	//tinh diem trung binh 
	float trungbinh = tong/3;
	//in ra 
	printf ("tong %.2f\n", tong);
	printf ("trungbinh %.2f\n", trungbinh);
	return 0; 
} 
