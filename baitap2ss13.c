#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main(){
	char str[100];
	int count; 
    char n;
	do{
		printf("______MENU______\n");
		printf("1. nhap vao chuoi\n");
		printf("2. in ra chuoi\n");
		printf("3. nhap vao 1 ki tu, in so lan ki tu xuat hien trong chuoi\n");
		printf("4. nhap vao 2 ki tu, thay the ki tu thu 2 thanh ki tu 1\n");
		printf("5. nhap vao 1 ki tu, xoa bo cac ki tu trong chuoi\n");
		printf("6. thoat\n");
		printf("lua chon cua ban: ");
	    int choice;
	    scanf("%d", &choice);
	    switch(choice){
		    case 1:
			   printf(" nhap vao chuoi: ");
			   scanf("%s", &str);
			   break;
			case 2:
				printf("chuoi vua nhap la: %s", str);
		    	break;
			case 3:
				count=0;
				printf("Nhap vao 1 ki tu bat ki: ");
			    scanf(" %c",&n);
				for(int i=0;i<strlen(str);i++){
					if(str[i]==n){
						count++;
					}
				}
				if(count>0){
			     	printf("So lan xuat hien la: %d\n",count);
			    } else{
			    	printf("Ky tu khong co mat trong chuoi\n");
				}
				break;
			case 4:
				printf("Nhap vao 2 ky tu: ");
				scanf("%s",str);
				str[1]=str[0];
				printf("%s\n",str);
				break;
			case 5:
				printf("Nhap vao 1 ki tu can xoa: ");
			    scanf(" %c",&n);
				for(int i=0;i<strlen(str);i++){
					if(str[i]==n){
						str[i] = ' ';
					}
				}
				printf("Chuoi con lai sau khi xoa la: ");
				printf("%s\n",str);
				break;
			case 6:
				exit(0);
		}	
	}while(1==1);
}
