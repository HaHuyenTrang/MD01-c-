#include <stdio.h>
int main(){
	int n;
	int k;
	printf("nhap so vao so phan tu mang");
    scanf("%d%d", &n, &k);
	int realNumber[n][k];
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			printf("realNumber[%d][%d]=",i,j);
			scanf("%d",&realNumber[i][j]);
		}
	}
	printf("gia tri cac phan tu trong mang la:\n");
	for(int i=0; i<n; i++){
		for(int j=0;j<k;j++){
			printf("%d\t", realNumber[i][j]); 
		} 
    }
    
    for(int i=0; i<n; i++){
		for(int j=0;j<k;j++){
			if(realNumber[i][j]%2==0){
				printf("\n cac so chan %d\n", realNumber[i][j]); 
				int sum;
				sum+= realNumber[i][j];
				printf("tong cac so chan: %d", sum); 
			}
		} 
    }
    
   
}
	
