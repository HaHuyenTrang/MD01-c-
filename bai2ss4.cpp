#include <stdio.h>
int main(){
	int a, b, c;
	printf("nhap 3 canh tam giac:");
	scanf("%d %d %d", &a, &b, &c); 
	if(a==b && b==c){ 
		printf("tam giac deu"); 
	}else if(a^2+b^2==c^2 || a^2+c^2==b^2 || b^2+c^2==a^2){
		printf("tam giac: vuong"); 
	}else if((a^2+b^2==c^2 || a^2+c^2==b^2 || b^2+c^2==a^2)&&(a==b || a==c || b==c)){
		printf("tam giac: vuong can"); 
	}else if(a==b || a==c || b==c){
		printf("tac giac: can"); 
	}else if (a+b>c && a+c>b && b+c>a){
		printf("tam giac: thuong"); 
	}else{
		printf("khong la tam giac"); 
	} 
	 
}  
