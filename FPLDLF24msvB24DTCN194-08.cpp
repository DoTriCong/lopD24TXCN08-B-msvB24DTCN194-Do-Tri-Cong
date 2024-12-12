//B24DTCN194-Do Tri Cong-Bai 8 
#include <stdio.h>

struct NhanVien {
    char ten[50];
    int tuoi;
    float luong;
};

int main() {
    struct NhanVien nv;

    printf("Nhap ten nhan vien: ");
    fgets(nv.ten, sizeof(nv.ten), stdin);

    printf("Nhap tuoi nhan vien: ");
    scanf("%d", &nv.tuoi);

    printf("Nhap luong nhan vien: ");
    scanf("%f", &nv.luong);

    printf("\nThong tin nhan vien:\n");
    printf("Ten: %s", nv.ten);
    printf("Tuoi: %d\n", nv.tuoi);
    printf("Luong: %.2f\n", nv.luong);

    return 0;
}


