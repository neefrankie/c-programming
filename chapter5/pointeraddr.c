#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 2;
    int z[10];

    int *ip;

    ip = &x;
    printf("ip now points to x %d\n", *ip);

    y = *ip;
    printf("y now get the value of ip %d\n", y);

    *ip = 0;
    printf("x is now %d\n", x);

    ip = &z[0];
    printf("ip is now points to z[0] %d\n", *ip);

    return 0;
}
