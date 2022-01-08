#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 0xFF; // -1
    unsigned char b = 0xFF; // 255
    printf("char a = 0x%08X\n", a);
    printf("char b = 0x%08X\n", b);
    printf("a == b : %d\n", a == b);
    int x = -1; // -1
    unsigned int y = 0xFF; // 255
    printf("char x = 0x%08X\n", x);
    printf("char y = 0x%08X\n", y);
    printf("x == y : %d\n", x == y);
    return 0;
}