#include <stdio.h>
int main(){
	//nhap 4 so nguyen
	int thousandDigit, hundredDigit, dozenDigit, unitDigit, so ;
	printf("4 so nguyen");
	scanf  ("%d", &so);
	unitDigit = so%10;
	dozenDigit = (so/10)%10; 
	hundredDigit = (so/100)%10;
	thousandDigit = so/1000; 
	//in ra tong
	printf ("tong la %d\n", thousandDigit + hundredDigit + dozenDigit + unitDigit); 
	printf ("so dao nguoc la %d ",unitDigit*1000 + dozenDigit*100 + hundredDigit*10 + thousandDigit ); 
	
} 
