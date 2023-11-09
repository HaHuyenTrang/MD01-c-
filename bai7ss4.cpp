#include<stdio.h>
int main(){
	int basicSalary, actualWorkday, workday =26;
	printf("Nhap luong co ban va ngay cong thuc te: \n");
	scanf("%d %d",&basicSalary, &actualWorkday);
	if(actualWorkday>workday){
		printf("Luong lam them la: %d VND",( basicSalary+ basicSalary*150/100)*(actualWorkday-26));
	} else {
		printf("Luong goc la: %d VND",basicSalary*(actualWorkday/workday));
		}
}
	
