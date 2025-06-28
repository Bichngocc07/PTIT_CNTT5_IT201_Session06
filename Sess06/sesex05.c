//
// Created by Owner on 6/27/2025.
//
#include <stdio.h>
int main() {
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n<=0) {
        printf("khong hop le");
        return 0;
    }
    int arr[n];
    printf("Nhap cac phan tu cua mang ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = timMin(arr,n);
    int max = timMax(arr,n);
    printf("so phan tu cua mang %d", min);
    return 0;
}
