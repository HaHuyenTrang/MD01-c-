#include <stdio.h>
#include <string.h>
struct Student{
		char name[50];
		int age;
		char numberPhone[12];
		char email[20];
	};	
int main(){
	struct Student student1 ={"ha huyen trang", 18, "19001000", "trang123@gmail.com"};
	printf("hoc sinh 1\nname = %s\n", student1.name);
	printf("age = %d\n", student1.age);
	printf("numberPhone = %s\n", student1.numberPhone);
	printf("email = %s\n\n", student1.email);
	struct Student student2 ={"ha bao chau", 11, "19001567", "chau123@gmail.com"};
	printf("hoc sinh 2\nname = %s\n", student2.name);
	printf("age = %d\n", student2.age);
	printf("numberPhone = %s\n", student2.numberPhone);
	printf("email = %s\n\n", student2.email);
	struct Student student3 ={"ha anh thu", 15, "197891000", "thu123@gmail.com"};
	printf("hoc sinh 3\nname = %s\n", student3.name);
	printf("age = %d\n", student3.age);
	printf("numberPhone = %s\n", student3.numberPhone);
	printf("email = %s\n\n", student3.email);
}
