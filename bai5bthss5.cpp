#include <stdio.h>
int main(){
	int day, month;
	printf("Nhap ngay sinh, thang sinh ");
	scanf("%d %d", &day, &month);
	if(month==3){
		if(day>=21){
			printf("Cung Bach Duong");
		} else{
			printf("Cung Song Ngu");
		}
	}
	if(month==4){
		if(day>=21){
			printf("Cung Kim Nguu");
		} else{
			printf("Cung Bach Duong");
		}
	}
	if(month==5){
		if(day>=21){
			printf("Cung Song Tu");
		} else{
			printf("Cung Kim Nguu");
		}
	}
	if(month==6){
		if(day>=22){
			printf("Cung Cu Giai");
		} else{
			printf("Cung Song Tu");
		}
	}
	if(month==7){
		if(day>=23){
			printf("Cung Su Tu");
		} else{
			printf("Cung Cu Giai");
		}
	}
    if(month==8){
    	if(day>=23){
    		printf("Cung Xu Nu");
    	} else{
    		printf("Cung Su Tu");
    	}
    }
    if(month==9){
    	if(day>=23){
    		printf("Cung Thien Binh");
		} else{
			printf("Cung Xu Nu");
		}
	}
	if(month==10){
		if(day>=24){
			printf("Cung Bo Cap");
		} else{
			printf("Cung Thien Binh");
		}
	}
	if(month==11){
		if(day>=23){
			printf("Cung Nhan Ma");
		} else{
			printf("Cung Bo Cap");
		}
	}
	if(month==12){
		if(day>=22){
			printf("Cung Ma Ket");
		} else{
			printf("Cung Nhan Ma");
		}
	}
	if(month==1){
        if(day>=20){
		    printf("Cung Bao Binh");
		} else{
			printf("Cung Ma Ket");
		}
	} 		
	if(month==2){
		if(day>=19){
			printf("Cung Song Ngu");
		} else{
			printf("Cung Bao Binh");
		}
    }
}	
