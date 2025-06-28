//
// Created by Owner on 6/27/2025.
//
#include <stdio.h>
int thapHaNoi(int n, char from,char to,char temp) {
    if (n==0)return ;
    thapHaNoi(n-1,from,to,temp);
    printf("%d", n);
}
int main() {
    int n;
    printf("Nhan so luong dia: ");
    scanf("%d", &n);

    if (n<=0) {
        printf("khong hop le");
    }else {
        thapHaNoi(n, 'A','C','B');
    }
    return 0;
}