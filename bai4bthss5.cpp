#include <stdio.h>
int main(){
	//luong, tong, tru  
	int wage, total, apartFrom;
	printf("Nhap vao tong thu nhap: ");
	scanf("%d", &total);
	if(total>80){
		apartFrom = total*1000000*35/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 35%% , luong %d VND", wage);
	} else if(total>52 && total<=80){
		apartFrom = total*1000000*30/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 30%% , luong %d VND", wage);
	} else if(total>32 && total<=52){
		apartFrom = total*1000000*25/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 25%% , luong %d VND", wage);
	} else if(total>18 && total<=32){
		apartFrom = total*1000000*20/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 20%% , luong %d VND", wage);
	} else if(total>10 && total<=18){
		apartFrom = total*1000000*20/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 15%% luong %d VND", wage);
	} else if(total>5 && total<=10){
		apartFrom = total*1000000*20/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 10%% , luong %d VND", wage);
	} else {
		apartFrom = total*1000000*20/100;
		wage = total*1000000-apartFrom;
		printf("Thue thu nhap 5%% , luong %d VND", wage);
	}
}
		
