//B24DTCN194-Do Tri Cong-Bai 7
#include <stdio.h>

int tinhTongChiaHetCho7(int arr[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 7 == 0) {
            tong += arr[i];
        }
    }
    return tong;
}

int main() {
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int tong = tinhTongChiaHetCho7(arr, n);
    printf("Tong cac so chia het cho 7 trong mang: %d\n", tong);

    return 0;
}

 
