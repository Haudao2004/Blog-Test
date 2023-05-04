#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("nhap vao a:");
    if((a % 2 == 0)){
        printf("gia tri nhap vao chia het cho 2!");

    }
    else{
        printf("gia tri nhap vao khong chia het cho 2! vui long nhap lai");
    }
    return 0;

}