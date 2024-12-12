//B24DTCN194-Do Tri Cong-Bai 1 
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("char:\n");
    printf("Size: %zu bits\n", sizeof(char) * 8);
    printf("Min: %d\n", CHAR_MIN);
    printf("Max: %d\n\n", CHAR_MAX);

    printf("short:\n");
    printf("Size: %zu bits\n", sizeof(short) * 8);
    printf("Min: %d\n", SHRT_MIN);
    printf("Max: %d\n\n", SHRT_MAX);

    printf("int:\n");
    printf("Size: %zu bits\n", sizeof(int) * 8);
    printf("Min: %d\n", INT_MIN);
    printf("Max: %d\n\n", INT_MAX);

    printf("long:\n");
    printf("Size: %zu bits\n", sizeof(long) * 8);
    printf("Min: %ld\n", LONG_MIN);
    printf("Max: %ld\n\n", LONG_MAX);

    printf("float:\n");
    printf("Size: %zu bits\n", sizeof(float) * 8);
    printf("Min: %e\n", FLT_MIN);
    printf("Max: %e\n\n", FLT_MAX);

    printf("double:\n");
    printf("Size: %zu bits\n", sizeof(double) * 8);
    printf("Min: %e\n", DBL_MIN);
    printf("Max: %e\n\n", DBL_MAX);

    return 0;
}

