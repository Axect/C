#include <stdio.h>

extern void sum2_(int *x, int *y);

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 2;
    sum2_(&x, &y);
    printf("y: %d", y);
    return 0;
}
