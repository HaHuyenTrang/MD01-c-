#include <stdio.h>
#include <string.h> 
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
} 
int main(){
//	int a=5;
//	int *ptrA = &a;
//	printf("gia tri a: %d\n", a);
//	printf("dia chi a: %d\n", &a);
//	printf("gia tri con tro: %d\n", *ptrA);
//	printf("dia chi con tro: %d\n", ptrA);
//	
    int a, b;
    printf("nhap gia tri a: ");
    scanf("%d", &a);
    printf("nhap gia tri b: ");
    scanf("%d", &b);
    printf("gia tri cua a va b truoc khi doi: %d va %d\n", a,b);
    swap(&a,&b);
    printf("gia tri a va b sau khi doi: %d va %d\n", a,b);
    printf("hieu a va b truoc khi doi: %d\n", a-b);
    swap(&a,&b);
    printf("hieu a va b sau khi doi: %d\n", a-b);
    return 0;
}
