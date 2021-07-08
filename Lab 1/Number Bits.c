#include <stdio.h>
void Solve(int num)
{
    int x1, x2, x3, x4;
    x1 = num & (0xff);
    num >>= 8;
    x2 = num & (0xff);
    num >>= 8;
    x3 = num & (0xff);
    num >>= 8;
    x4 = num & (0xff);
    printf("OCT-Wise OUTPUT : %d|%d|%d|%d\n", x4, x3, x2, x1);
}
int main()
{
    Solve(256);
    return 0;
}
