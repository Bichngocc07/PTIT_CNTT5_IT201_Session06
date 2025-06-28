//
// Created by Owner on 6/27/2025.
//
#include <stdio.h>
int recursion(int n) {
    //Dk dừng
    if(n==0) return 0;
    //goi ham
    return recursion(n/2);
    printf("%d",n%2);
}
int main() {
    int n;
    printf("Nhap vao so nguyen:");
    scanf("%d", &n);
    recursion(n);
}