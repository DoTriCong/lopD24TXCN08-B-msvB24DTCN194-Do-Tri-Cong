//B24DTCN194-Do Tri Cong-Bai 4 
#include <stdio.h>
#include <math.h>

#define G 9.81

int main() {
    float r, mu, theta, V_max;
    
    printf("Nhap gia tri r (ban kinh): ");
    scanf("%f", &r);
    
    printf("Nhap gia tri mu (he so ma sat): ");
    scanf("%f", &mu);
    
    printf("Nhap gia tri theta (goc nghiêng - theo radian): ");
    scanf("%f", &theta);
    
    V_max = sqrt((r * G * (mu + tan(theta))) / (1 - mu * tan(theta)));
    
    printf("Gia tri V_max: %.2f\n", V_max);
    
    return 0;
}

