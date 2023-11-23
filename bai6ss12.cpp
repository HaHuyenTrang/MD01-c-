#include <stdio.h>
int main(){
	int n=100, currentIndex;
	int integer[n];
	int addValue,addIndex ;
	int newInteger[n+1];
	int deleteIndex;
	int new_Integer[n-1];
	do{
		printf("__________________________MENU______________________\n");
		printf("1. nhap so phan tu va nhap gia tri cac phan tu\n");
		printf("2. in ra gia tri cac phan tu dang quan li\n");
		printf("3. them 1 phan tu vao vi tri chi dinh\n");
		printf("4. sua 1 phan tu o vi tri chi dinh\n");
		printf("5. xoa 1 phan tu o vi tri chi dinh\n");
		printf("6. sap xep tang dan\n");
		printf("7. sap xep giam dan\n");
		printf("8. tim kiem phan tu nhap vao\n");
		printf("9. thoat\n");
		printf("lua cho cua ban: ");
	int choice;
	scanf("%d", &choice);
	 switch(choice){
		case 1:
			printf("nhap so phan tu ");
            scanf("%d", &n);
            for(int i=0; i<n; i++){
               printf("integer[%d]=",currentIndex);
     	       scanf("%d", &integer[currentIndex]);
     	       currentIndex++;
	        }
	    break;
        case 2:
        	printf("in gia tri cac phan tu mang\n");
        	for(int i=0; i<currentIndex; i++){
        		printf("%d\t", integer[i]);
		    }
		break;
		case 3:
			
			printf("nhap vao gia tri can them : ");
	        scanf("%d",&addValue);
	        printf("nhap vao vi tri can them : ");
	        scanf("%d",&addIndex);
	       
	        for(int i = 0 ; i < addIndex ; i++){
		        newInteger[i] = integer[i];
	        }
	            newInteger[addIndex] = addValue;
	        for(int i = addIndex + 1 ; i < n + 1 ; i++){
		        newInteger[i] = integer[i-1];
        	}
	        for(int i = 0 ; i < n ; i++){
		        printf("%d \t", integer[i]);
	        }
            	printf("\n");
        	for(int i = 0 ; i < n + 1 ; i++){
	        	printf("%d \t" , newInteger[i]);
	        }
	        
	    break;
	    case 4:
	    	int updateValue,updateIndex;
	        printf("Nhap gia tri can sua va vi tri muon sua: ");
	        scanf("%d %d",&updateValue,&updateIndex);
	        if(updateIndex>0 && updateIndex<n){
		       integer[updateIndex]=updateValue;
		            for(int i=0; i<n; i++){
			          printf("integer[%d]= %d\n",i,integer[i]);
	                }
	        } else{
		       printf("Khong hop le");
	        }
	    break;
	    case 5:
	    	
	    	printf("Nhap vi tri xoa: ");
	        scanf("%d",&deleteIndex);
	        
	        for(int i=0;i<deleteIndex;i++){
		        new_Integer[i]=integer[i];
	        }
           	for(int i=deleteIndex+1;i<n;i++){
		        new_Integer[i-1]=integer[i];
	        }
	        for(int i=0;i<n-1;i++){
		        printf("%d\t",new_Integer[i]);
	        }
	         return 0;
	    break;
		case 6:
			for(int i=0; i<currentIndex; i++){
			    for(int j=i+1;j<currentIndex;j++){
				    if(integer[i]>integer[j]){
					int temp = integer[i];
					integer[i] = integer[j];
					integer[j]=temp;
				    }
			    }
	        }
	        printf("mang sau khi sap xep: ");
	        for(int i=0; i<currentIndex; i++){
	         	printf("%d\t",integer[i]);
	        }
	    break;
		case 7:
			for(int i=0; i<currentIndex; i++){
			    for(int j=i+1;j<currentIndex;j++){
				    if(integer[i]<integer[j]){
					int temp = integer[i];
					integer[i] = integer[j];
					integer[j]=temp;
				    }
			    }
	        }
	        printf("mang sau khi sap xep: ");
	        for(int i=0; i<currentIndex; i++){
	         	printf("%d\t",integer[i]);
	        }
	    break;
	    case 8:
	    	int findNumber;
	    	int count;
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
	 }
	}while(1==1);
}
