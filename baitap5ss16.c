#include <stdio.h>
int main(){
	FILE *f1, *f2, *f3;
	char check;
	f1 = fopen("C:\\Users\\Admin\\Desktop\\BT01.txt","r");
	f2 = fopen("C:\\Users\\Admin\\Desktop\\BT03.txt","r");
	f3 = fopen("C:\\Users\\Admin\\Desktop\\BT05.txt","w");
	if(f1 == NULL || f2 == NULL || f3 == NULL){
		printf("Khong the mo cac tep!!");
		return 1;
	}
	while((check == fgetc(f1)) != EOF){
		fputc(check,f3);
	}
	while((check == fgetc(f2)) != EOF){
		fputc(check,f3);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("Sao chep hoan thanh!");
	return 0;
}
	
