#include <stdio.h>
#include <string.h>
struct Student{
	char name[20];
	int age;
	char numberPhone[12];
	char email[20];
}; 
int studentInformation(struct Student *sv){
    printf("Nhap ten: ");
	scanf("%s",sv->name);
	printf("nhap tuoi: ");
	scanf("%d", &sv->age);
	printf("nhap so dien thoai:");
	scanf("%s", sv->numberPhone);
	printf("nhap email: ");
	scanf("%s", sv->email);
}
int studentOut(struct Student sv){
	printf("ho ten: %s\n", sv.name);
	printf("tuoi: %d\n", sv.age);
	printf("so dien thoai: %s\n", sv.numberPhone);
	printf("email: %s\n", sv.email);
}
int main(){
	struct Student sv;
		printf("thong tin sinh vien: ");
		studentInformation(&sv);
		studentOut(sv);
}
