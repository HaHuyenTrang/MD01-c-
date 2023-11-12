#include<stdio.h>
#include<math.h> 
int main(){
	//ax^2 + bx +c
	float a, b, c, x1,x2,delta;
	printf("nhap vao so a, b, c");
	scanf("%f %f %f", &a, &b, &c);
	//Kiem tra dieu kien cua a 
	if(a==0 && b==0 && c==0){
		printf("phuong trinh vo so nghiem");
	//Tinh delta neu a khac 0 
	} else {
		delta = pow(b,2)-4*a*c;
	//Kiem tra dieu kien delta 
		if (delta>0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem la: x1= %.2f va x2= %.2f",x1,x2); 
		} else if(delta==0){
			x1=x2=-b/(2*a);
			printf("Phuong trinh co 1 nghiem kep la: x1=x2= %.2f",x1); 
		} else {
			printf("Phuong trinh vo nghiem"); 
		} 
	}
}
		

