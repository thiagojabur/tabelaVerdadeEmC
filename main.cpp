#include <stdio.h>
int main()
{
    // and && e o or ||
    printf("F e F = %d\n", 0 && 0);
    printf("F e V = %d\n", 0 && 1);
    printf("V e V = %d\n", 1 && 1);
    printf("V ou F = %d\n", 1 || 0);
    printf("F ou F = %d\n", 0 || 0);
    printf("V ou V = %d\n", 1 || 1);
    printf("nao V = %d\n", !1);
    printf("nao F = %d\n", !0);
    return 0;
}
