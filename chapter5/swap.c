#include <stdio.h>

void swap(int *px, int *py);

int main(int argc, char const *argv[])
{
    int x = 3;
    int y = 5;

    printf("Before swap: x: %d, y: %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x: %d, y: %d\n", x, y);

    return 0;
}

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}
