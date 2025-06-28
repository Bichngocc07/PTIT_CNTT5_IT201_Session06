//
// Created by Owner on 6/27/2025.
//
#include <stdio.h>


int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;  
    }
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int steps;
    printf("Nhập số bậc của cầu thang: ");
    scanf("%d", &steps);

    int result = countWays(steps);
    printf("Số cách leo cầu thang là: %d\n", result);
    return 0;
}
