//
// Created by Owner on 6/27/2025.
//
#include <stdio.h>
int fibonaci(int n, int index, int number2) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    ///
    ///
    return fibonaci(n-1)+fibonaci(n-2);
        //2 gọi ham
    int number3 = number1 + number2;
    return fibonaci(n, index+1, number2,number3);
}
int main() {
    //Nhap n in ra n so trong fibonaci
    int n;
    printf("Nhap vao so n fibonaci:");
    scanf("%d", &n);
    fibonaci(n, 0, 1);
    //1.Dieu kien dung
    //
}