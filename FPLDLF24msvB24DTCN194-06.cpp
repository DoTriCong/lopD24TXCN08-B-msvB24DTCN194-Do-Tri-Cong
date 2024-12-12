//B24DTCN194-Do Tri Cong-Bai 6
#include <stdio.h>

float tinhDienTichXungQuanh(float l, float w, float h) {
    return 2 * h * (l + w);
}

int main() {
    float l, w, h;

    printf("Nhap chieu dai (l) cua day: ");
    scanf("%f", &l);

    printf("Nhap chieu rong (w) cua day: ");
    scanf("%f", &w);

    printf("Nhap chieu cao (h) cua hinh hop: ");
    scanf("%f", &h);

    float A = tinhDienTichXungQuanh(l, w, h);
    printf("Dien tich xung quanh cua hinh hop chu nhat: %.2f\n", A);

    return 0;
}

 
