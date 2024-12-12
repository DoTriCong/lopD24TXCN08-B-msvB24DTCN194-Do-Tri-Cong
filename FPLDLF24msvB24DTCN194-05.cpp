//B24DTCN194-Do Tri Cong-Bai 5 
#include <stdio.h>

int main() {
    float l, w, h, A;

    printf("Nhap chieu dai (l) cua day: ");
    scanf("%f", &l);

    printf("Nhap chieu rong (w) cua day: ");
    scanf("%f", &w);

    printf("Nhap chieu cao (h) cua hinh hop: ");
    scanf("%f", &h);

    A = 2 * h * (l + w);

    printf("Dien tich xung quanh cua hinh hop chu nhat: %.2f\n", A);

    return 0;
}

