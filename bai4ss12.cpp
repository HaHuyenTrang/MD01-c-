#include <stdio.h>
#include <stdbool.h>
 
bool check(int n, int A[]){
    int i;
    int dem = 0;
    for(i = 0;i<n;i++){
        if(A[i] != A[n-i-1]){
          dem++;
        }
    }
    if(dem == 0) printf("\n\nMang doi xung nhau\n");
    else printf("\n\nMang khong doi xung nhau\n");
}
bool check2(int k, int B[]){
    int i;
    int dem = 0;
    for(i = 0;i<k;i++){
        if(B[i] != B[k-i-1]){
          dem++;
        }
    }
    if(dem == 0) printf("\n\nMang doi xung nhau\n");
    else printf("\n\nMang khong doi xung nhau\n");
}
int main()
{
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d,",&n);
    int A[n];
    int i;
    for(i = 0; i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
    }
     
    printf("\n\nMang vua nhap:\n");
     
    for(i = 0; i<n;i++){
        printf("%d  ", A[i]);
    }
     
    check(n, A);
    int k;
    printf("Nhap so phan tu: ");
    scanf("%d,",&k);
    int B[k];
    
    for(i = 0; i<k;i++){
        printf("B[%d] = ",i);
        scanf("%d", &B[i]);
    }
     
    printf("\n\nMang vua nhap:\n");
     
    for(i = 0; i<k;i++){
        printf("%d  ", B[i]);
    }
     
    check(k, B);
}
