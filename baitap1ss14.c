#include <stdio.h>
#include <string.h>
int main(){
	int a;
	int *ptrA = &a;
	printf("dia chi bien a: %d", &a);
	int temp = *ptrA;
	printf("\ngia tri bien a: %d\n", a);
	printf("gia tri con tro: %d\n",*ptrA);
	printf("dia chi con tro: %d", ptrA); 
	return 0;
}
