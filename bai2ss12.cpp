#include <stdio.h>
	int divide(int a, int b){
        if(a>b){
		  return a/b;
     	}else{
		  return b/a;
    	}
	}
	int divide1(int b, int c){

	    if(b>c){
		  return  b/c;
	    }else{
		  return  c/b;
	    }
	}
 	int divide2(int a, int c){
	
	    if(a>c){
		  return  a/c;
	    }else{
		  return  c/a;
	    }
    }
	int core(int a, int b){
	return b*a;
	}
	int core1(int b, int c){
	return  b*c;
	}
 	int core2(int a, int c){
	return  a*c;
    }
        
int main(){
	int a, b, c;
	printf("nhap vao 3 so");
	scanf("%d%d%d", &a,&b,&c);
	if(a%b==0 || b%a==0){
	
	    if(a>b){
	        printf("cap 1: %d/%d = %d\n  ", a,b,divide(a,b));
        } else{
         	printf("Cap 1: %d/%d = %d\n",b,a,divide(a,b));
    	}
	}else{
		printf("cap 1: %d khong chia het %d\n",a,c);
	}
	if(b%c==0 || c%b==0){
	   if(b>c){
		  printf("cap 2: %d/%d = %d\n", b,c,divide1(b,c));
	   }else{
		  printf("cap 2: %d/%d = %d\n", c,b,divide1(b,c));
	   }
	}else{
		printf("cap2: %d khong chia het %d\n",b,c);
	}
	if(a%c==0 || c%a==0){
	    if(a>c){
	      printf("cap 3: %d/%d = %d\n", a,c,divide2(a,c));
     	}else{
	      printf("cap 3: %d/%d = %d \n", c,a,divide2(a,c));
	    }
	}else{
		printf("cap 3: %d khong chia het %d \n",a,c);
	}
    printf("cap 1: %d*%d = %d \n", a,b,core(a,b));
    printf("cap 2: %d*%d = %d \n", b,c,core1(b,c));
    printf("cap 3: %d*%d = %d \n", a,c,core2(a,c)); 
}


