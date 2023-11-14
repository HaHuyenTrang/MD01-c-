#include <stdio.h>
int main(){
	int fizz, buzz;
	printf("cac so tu 1 den 100\n");
	for(int i=1; i<101; i++){
		  printf("%d\t",i);
	}
		for(int i=1; i<101; i++){
			if(i%3==0 && i%5==0){
	   			printf("fizzbuzz: %d\n", i);
	   		} else if(i%5==0){
	   			printf("buzz: %d\n", i);
	   		} else if(i%3==0){
			   	printf("fizz: %d\n", i);
			} else {
				printf("khong chia het: %d\n", i);
			}
	}
	 
}
	  
	    

