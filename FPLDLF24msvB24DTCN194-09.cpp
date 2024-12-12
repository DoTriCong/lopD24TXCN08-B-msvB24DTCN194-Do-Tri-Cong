//B24DTCN194-Do Tri Cong-Bai 9
#include <stdio.h>
#include <string.h>

struct NhanVien {
    char ten[50];
    int tuoi;
    float luong;
};

void sapXepTheoLuong(struct NhanVien arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].luong < arr[j].luong) {
                struct NhanVien temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timKiemTheoLuong(struct NhanVien arr[], int n, float luongCanTim) {
    for (int i = 0; i < n; i++) {
        if (arr[i].luong > luongCanTim) {
            return 1;
        }
    }
    return 0;
}

void inDanhSach(struct NhanVien arr[], int n) {
    printf("\nDanh sach nhan vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Ten: %sTuoi: %d\nLuong: %.2f\n\n", arr[i].ten, arr[i].tuoi, arr[i].luong);
    }
}

int main() {
    int n;

    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);

    struct NhanVien arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten nhan vien %d: ", i + 1);
        getchar();
        fgets(arr[i].ten, sizeof(arr[i].ten), stdin);

        printf("Nhap tuoi nhan vien %d: ", i + 1);
        scanf("%d", &arr[i].tuoi);

        printf("Nhap luong nhan vien %d: ", i + 1);
        scanf("%f", &arr[i].luong);
    }

    inDanhSach(arr, n);

    sapXepTheoLuong(arr, n);
    printf("\nDanh sach nhan vien sau khi sap xep theo luong (giam dan):\n");
    inDanhSach(arr, n);

    float luongCanTim = 10000;
    if (timKiemTheoLuong(arr, n, luongCanTim)) {
        printf("\nCo nhan vien co luong > %.2f.\n", luongCanTim);
    } else {
        printf("\nKhong co nhan vien co luong > %.2f.\n", luongCanTim);
    }

    return 0;
}
 
