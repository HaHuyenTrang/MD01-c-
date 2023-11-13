#include<stdio.h>
#include <stdlib.h>
#include <stdio.h> 
int main(){
	int a,b,ucln,bcnn;
	printf("Nhap 2 so: ");
	scanf("%d %d",&a,&b);
	do{
		printf("******************************MENU*********************************\n");
		printf("1. Tong hai so\n");
		printf("2. Hieu hai so\n");
		printf("3. Tich hai so\n");
		printf("4. Thuong hai so\n");
		printf("5. So du trong phep chia hai so\n");
		printf("6. uoc chung lon nhat\n");
		printf("7. boi chung nho nhat\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Ban da chon 1\n");
				printf("Tong cua 2 so la: %d\n",a+b);
				break;
			case 2:
				printf("Ban da chon 2\n");
				printf("Hieu cua hai so la: %d\n",a-b);
				break;
			case 3:
				printf("Ban da chon 3\n");
				printf("Tich cua hai so la: %d\n",a*b);
				break;
			case 4:
				printf("Ban da chon 4\n");
				printf("Thuong cua hai so la: %d\n",a/b);
				break;
			case 5:
				printf("Ban da chon 5\n");
				printf("So du trong phep chia cua hai so la: %d\n",a%b);
				break;
			case 6:
				printf("Ban da chon 6\n");
				while(a!=b){
					if(a=b){
						ucln=b;
						printf("UCLN cua hai so la: %d\n",b);
					} if(a>b){
						a = a - b;
					} else{
						b = b - a;
					} 
					return a;
					break;
			case 7:
				printf("Ban da chon 7\n");
				while(a!=b){
					if(a=b){
						ucln=a;
					    printf("BCNN cua hai so la: %d\n",a*b/ucln);
					    break;
					if(a>b){
						a = a - b;
					} else{
						b = b - a;
					}
				}
				return a;
				} 
			case 8:
				exit(choice);
			default:
				printf("Vui long chon tu 1 den 8: \n");
			} 
		}
    } while("Vui long chon tu 1 den 8: \n");
}
