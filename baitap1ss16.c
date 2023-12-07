#include <stdio.h>
int main(){
	FILE *taptin = NULL;
	char array[100];
	taptin = fopen("C:\\Users\\Trang\\Desktop\\BT01.txt","w");
	if(taptin != NULL){
		printf("Nhap chuoi: ");
		scanf("\n");
		gets(array);
	}
	fprintf(taptin, "Noi dung van ban : %s\n",array);
	fclose(taptin);
    return 0;
}
