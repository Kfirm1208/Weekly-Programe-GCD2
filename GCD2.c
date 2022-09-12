#include <stdio.h>

int GcdEuclid(int a, int b)
{
    int z;

    while (b != 0)
    {
        z = b;
        b = a % b;
        a = z;
    }
    return a;
}

int main()
{
    int a, b;
    printf("Insert a : ");
    scanf("%d", &a);
    printf("Insert b : ");
    scanf("%d", &b);

    printf("GCD of (%d,%d) = %d", a, b, GcdEuclid(a, b));

    return 0;
}