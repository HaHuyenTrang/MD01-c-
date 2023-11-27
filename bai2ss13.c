#include <stdio.h>
#include <string.h>
int mai(){

	do{
		printf("______MENU______\n");
		printf("1. nhap vao chuoi\n");
		printf("2. in ra chuoi\n");
		printf("3. nhap vao 1 ki tu, in so lan ki tu xuat hien trong chuoi\n");
		printf("4. nhap vao 2 ki tu, thay the ki tu thu 2 thanh ki tu 1\n");
		printf("5. nhap vao 1 ki tu, xoa bo cac ki tu trong chuoi\n");
		printf("6. thoat\n");
		printf("lua chon cua ban: ");
	char str[100];
	int count; 
	int n;	
	int choice;
	scanf("%d", &choice);
	    switch(choice){
		    case 1:
			   printf(" nhap vao chuoi: ");
			   scanf("%s", &str);
			break;
			return 0;
			case 2:
				printf("chuoi vua nhap la: %s", str);
			break;
			return 0;
//			case 3:
//				
//				scanf("%d", n);     // ky tu de dem
//                int i = 0;
//                count = 0;             // bien dem
// 
//   // dem so lan xuat hien cua ky tu 't' trong chuoi s
//   while(str[i] != '\0') {
//      if(str[i] == n)
//         count++;
// 
//      i++;
//   }
//    
//   if(count > 0) {
//        count<<"Ky tu"<<n<<" xuat hien"<<count<<" lan trong chuoi "<<str;
//   } else {
//        count<<"Ky tu"<<n<<" khong co mat trong chuoi "<<str;
//   }
//   return 0;
          case 6:
          	exit(0);
          	return 0;
		}
	}while(1==1);
}
