#include <stdio.h>
int main(){
	int n, k;
	int integer1[n];
	int integer2[k];
	printf("nhap so phan tu mang integer1: ");
	scanf("%d", &n);
	printf("nhap so phan tu mang integer2: ");
	scanf("%d", &k);
	printf("nhap phan tu mang integer1: ");
	for(int i=0;i<n;i++){
		scanf("%d", &integer1[i]);
	}
	printf("nhap phan tu mang integer 2: ");
	for(int i=0;i<k;i++){
		scanf("%d", &integer2[i]);
	}
	
	int count1=quantityInteger(integer1,n);
	int count2=quantityInteger(integer2,k);
	printf("so luong so nguyen to trong mang integer: %d\n", count1);
	printf("so luong so nguyen to trong mang number: %d\n ", count2);
	if(count1>count2){
		printf("so luong so nguyen to trong mang integer lon hon number");
	}else if(count2>count1){
		printf("so luong so nguyen to trong mang number lon hon integer");
	}else{
		printf("2 mang bang nhau");
	}
	return 0;
}
int check(int a){
	if(a<2){
		return 0;
	}
	for(int i=2; i*i<=a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int quantityInteger(int array[], int h){
	int count=0;
	for(int i=0;i<h;i++){
		if(check(array[i])){
			count++;
		}
	}
}
