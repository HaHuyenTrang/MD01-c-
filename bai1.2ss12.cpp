#include <stdio.h>
	int signal(int a, int b){
        if(a>b){
		  return a-b;
     	}else{
		  return b-a;
    	}
	}
	int signal1(int b, int c){

	    if(b>c){
		  return  b-c;
	    }else{
		  return  c-b;
	    }
	}
 	int signal2(int a, int c){
	
	    if(a>c){
		  return  a-c;
	    }else{
		  return  c-a;
	    }
    }
	int sum(int a, int b){
	return b+a;
	}
	int sum1(int b, int c){
	return  b+c;
	}
 	int sum2(int a, int c){
	return  a+c;
    }
        
int main(){
	int a, b, c;
	printf("nhap vao 3 so");
	scanf("%d%d%d", &a,&b,&c);
	if(a>b){
	    printf("cap 1: %d-%d = %d\n  ", a,b,signal(a,b));
    } else{
    	printf("Cap 1: %d-%d = %d\n",b,a,signal(a,b));
	}
	if(b>c){
		printf("cap 2: %d-%d = %d\n", b,c,signal1(b,c));
	}else{
		printf("cap 2: %d-%d = %d\n", c,b,signal1(b,c));
	}
	if(a>c){
		printf("cap 3: %d-%d = %d\n", a,c,signal2(a,c));
	}else{
		printf("cap 3: %d-%d = %d \n", c,a,signal2(a,c));
	}
    printf("cap 1: %d+%d = %d \n", a,b,sum(a,b));
    printf("cap 2: %d+%d = %d \n", b,c,sum2(b,c));
    printf("cap 3: %d+%d = %d \n", a,c,sum2(a,c)); 
}



