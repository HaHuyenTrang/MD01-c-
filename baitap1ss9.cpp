#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int main(){
	int n=100,currentIndex = 0,integer[n],sum=0,count;
	int max,min; 
	do{
		printf("__________________MENU_________________\n");
	    printf("1. nhap so phan tu can nhap va gia tri cac phan tu\n");
	    printf("2. in ra gia tri cac phan tu dang quan li\n");
	    printf("3. in ra gia tri cac phan tu chan va tinh tong\n");
	    printf("4. in ra gia tri lon nhat va nho nhat\n");
	    printf("5. in ra cac phan tu la so nguyen to, tinh tong\n");
	    printf("6. nhap vao 1 so va thong ke trong bang co bao nhieu phan tu nhu vay\n");
	    printf("7. them 1 phan tu vao vi tri chi dinh\n");
	    printf("8. thoat\n");
		printf("lua chon cua ban: ");
	    int choice;
	    scanf("%d",&choice);
	    switch(choice){
	    	case 1:
	    		int n;
	    		printf("nhap so phan tu mang: ");
	    		scanf("%d", &n);
	    		for(int i=0; i<n; i++){
	    			printf("integer[%d]=",currentIndex);
	    			scanf("%d", &integer[currentIndex]);
	    			currentIndex++;
	            }
		   	    break;
		   	case 2:
			   printf("gia tri cac phan tu dang quan li: ");
			   for(int i=0; i<currentIndex; i++){
		           printf("%d\t", integer[i]); 
		        }  
				printf("\n");
	            break;
	        case 3:
	        	for(int i=0; i<currentIndex; i++){
				    if(integer[i]%2==0){
			    	sum+=integer[i];
	        		printf("So chan trong mang la: %d\n", integer[i]);
				    }
			    }
	        	printf("Tong cua so chan trong mang la: %d",sum);
				break;
			case 4:
			    max=integer[0]; min=integer[0]; 
				for(int i=1; i<currentIndex; i++){
					if(integer[i]>max){
						max=integer[i]; 
					} 
					if(integer[i]<min){
						min=integer[i];
					} 
				}
			    printf("gia tri lon nhat %d, nho nhat %d " , max, min);
			    break; 
			case 5:
				sum=0;
				 for(int i=0; i<currentIndex; i++){
				 	int isPrime =0;
				 	if(integer[i]>=2){
			          	for(int j=2; j<=sqrt(integer[i]); i++){
			            	if(integer[i]%j==0){
			            	 	isPrime = 1;
						   		printf("cac phan tu la so nguyen to: ", isPrime);
							}
						}
					}else{
					 	isPrime=1;
					}
					if(isPrime=0){
					 	printf("%d\t", integer[i]);
					 	sum+= integer[i];
					}
				}
				printf("\n tong cac so nguyen to: %d\n", sum);
			break; 
			case 6:
			    int findNumber;
	            printf("Nhap findNumber: ");
                scanf("%d",&findNumber);
	            for(int i=0; i<n; i++){
		            if(integer[i]==findNumber){
			            printf("integer[%d]= %d\n",i,findNumber);
			            count+=1; 
		            }
            	} 
            	printf("Co %d so nhu vay",count);
				break; 
			case 7:
			//them phan tu vao vi tri chi dinh
//			    int addIndex, addValue;
//				printf("Nhap vao gia tri can them: ");
//				scanf("%d",&addValue);
//				printf("Nhap vao vi tri muon them: ");
//				scanf("%d",&addIndex);
//				int newNum[(n+1)];
//				for(int i=0;i<addIndex;i++){
//					newNum[i]=integer[i];
//			    }
//			    newNum[addIndex]=addValue;
//				for(int i=addIndex+1;i<n+1;i++){
//					newNum[i]=integer[(i-1)]; 
//				}
//				for(int i=0;i<n;i++){
//					printf("%d\t",integer[i]); 
//				}
//				printf("\n");
//				for(int i=0;i<n+1;i++){
//					printf("%d\t",newNum[i]); 
//				} 
				break; 
			// sap xep mag tang dan
			case 8:
				int size=sizeof(integer)/sizeof(int);
				for(int i=1; i<size; i++){
					for (int i=1; i<size; i++){
					    int key = integer[i];
				     	int j=i-1;
				    	while(j>=0 && key>integer[j]){
						integer[j+1]=integer[j];
						j-=1;
					}
				
					integer[j+1]=key;
				}
			}
				for(int i=0; i<size; i++){
		        printf("%d\t", integer[i]);
	          }	
		//	default:
		   //     printf("vui long chon tu 1 den 8"); 	
		} 
	} while("Vui long chon tu 1 den 8: ");
} 
