#include <stdio.h>
#include <string.h>
struct Student{
	char name[20];
	int age;
	char numberPhone[12];
	char email[20];
}; 
int studentInformation(struct Student *sv){
    printf("Nhap ten: ");
	scanf("%s",sv->name);
	printf("nhap tuoi: ");
	scanf("%d", &sv->age);
	printf("nhap so dien thoai:");
	scanf("%s", sv->numberPhone);
	printf("nhap email: ");
	scanf("%s", sv->email);
}
int studentOut(struct Student sv){
	printf("ho ten: %s\n", sv.name);
	printf("tuoi: %d\n", sv.age);
	printf("so dien thoai: %s\n", sv.numberPhone);
	printf("email: %s\n", sv.email);
}
int main(){
	struct Student sv[34];
	int n =0;
	int stt,k; 
	int choice;
	do{
		printf("1.nhap thong tin\n");
		printf("2.them thong tin\n");
		printf("3.sua thong tin\n");
		printf("4.xoa thong tin\n"); 
		printf("5.In thong tin \n");
		printf("6. Thoat\n"); 
		printf("lua chon cua ban: "); 
	    scanf("%d", &choice);
	    switch(choice){
		    case 1:
		    	studentInformation(&sv[n]);
		    	n++; 
		        break; 
		    case 2:
			   	studentInformation(&sv[n]);
		    	n++; 
				break;
			case 3:
			    printf("vi tri can sua: ");
			    scanf("%d",&stt);
			    if(stt>=0 && stt<n){
			    	studentInformation(&sv[stt]);
				} else{
					printf("Vi tri khong hop le\n");
				}
				break;
			case 4:
			    printf("vi tri can xoa: ");
			    scanf("%d",&k);
			    if(k>=0 && k<n){  
				    for(stt=k;k<n-1;k++){
				 	    sv[k] = sv[k+1]; 
				    }
			        n--; 
				} else{
					printf("Vi tri khong hop le\n");
				}
				 
				break;
			case 5:
	        	printf("thong tin sinh vien: ");
	        	for (int stt=0;stt<n;stt++){
	        		printf("sinh vien %d: \n", stt+1); 
	        		studentOut(sv[stt]);
				}
		        
		        break; 
		    case 6:
		        exit(0); 
		        return 0; 
		} 
	}while(1==1); 
}
	
	

