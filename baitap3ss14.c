#include <stdio.h>
#include <string.h> 
int strLen(char *str){
	const char *ptr = str;
	while(*ptr != '\0'){
		ptr++;
	}
	return ptr - str;
}
int main(){
	int i;
    printf("nhap chuoi: ");
	char string[100];
	scanf("%s", &string);
	while(string[i] != '\0') {
	    i++;
    }
    printf("Do dai cua chuoi:  %d\n", i );
	printf("chuoi da nhap vao la: %s\n", string);
	int y;
    printf("nhap chuoi: ");
	char str[100];
	scanf("%s", &str);
	while(str[y] != '\0') {
	    y++;
    }
    printf("Do dai cua chuoi:  %d\n", y );
	printf("chuoi da nhap vao la: %s\n", str);
	if(i==y){
		printf("Hai chuoi bang nhau\n");
	} else if(i>y){
		printf("Chuoi 1 dai hon chuoi 2\n");
	} else{
		printf("Chuoi 2 dai hon chuoi 1");
	}
	return 0;	    	    
}

