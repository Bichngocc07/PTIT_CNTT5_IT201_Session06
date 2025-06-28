//
// Created by Owner on 6/27/2025.
//
#include <stdio.h>
int tong(int n) {
    if (n == 1) return 1;
    return n%10 + tong(n/10);
}
    int main(){
        int n;
        printf("Nhap vao so nguyen n :");
        scanf("%d", &n);

        if (n <=0);{
        printf("khong hop le!:");
    }
    int tongSoNguyen=tong(n);
    printf("%d", tongSoNguyen);
    return 0;
}
