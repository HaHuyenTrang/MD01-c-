#include <stdio.h>
#include <string.h>
int main(){
	do{
		printf("__________MENU_________\n");
		printf("1. nhap vao chuoi ki tu\n");
		printf("2. in ra do dai va noi dung vua nhap\n");
		printf("3. in ra chuoi dao nguoc\n");
		printf("4. in ra so luong chu cai trong chuoi\n");
		printf("5. in ra so luong chu so trong chuoi\n");
		printf("6. in ra so luong ki tu dac biet trong chuoi\n");
		printf("7. thoat\n");
		printf("lua chon cua ban: ");
		int length;
	    int choice;
	    int letNum;
	    int letNum1;
	    int i = 0;
	    scanf("%d", &choice);
	    switch(choice){
		    case 1:
			    printf("nhap chuoi: ");
		     	char string[100];
		    	scanf("%s", &string);
		    break;
		    case 2:
	        	while(string[i] != '\0') {
                    i++;
                }
                printf("Do dai cua chuoi:  %d\n", i );
		        printf("chuoi da nhap vao la: %s\n", string);
		    break;   
		  	case 3:
		  		length = strlen(string);
				// khai bao bien length la do dai chuoi
                for(int i = 0; i<length/2; i++){
                    char tg = string[i];
                    string[i] = string[length-i-1];
                    string[length-i-1] = tg;
                }
                printf("Chuoi theo chieu dao nguoc: %s\n",string);
            break;
		    case 4:
		    	for(int i=0;i<string[length];i++){
			    	if(string[i]>= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z'){
			    		letNum++;
			    	}
			    }
			    printf("So luong ki tu chu cai trong chuoi la: %d\n",letNum);
			break;
		    case 5:
				letNum1=0;
				for(int i=0;i<string[length];i++){
			    	if(string[i]>= '0' && string[i] <= '9'){
			    		letNum1++;
			    	}
			    }
			    printf("So luong ki tu chu so trong chuoi la: %d\n",letNum1);
			break;
//			case 6:
//				printf("So luong ki tu dac biet trong chuoi la: %d\n",stringlen(string)-letNum-letNum1);
			break;
			case 7:
				exit(0);
				default:
        	    printf("lua chon cua ban");
	
		}
	 
	}while(1==1);

}

