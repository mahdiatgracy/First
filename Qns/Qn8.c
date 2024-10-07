//This is sln of Qn8
#include<stdio.h>

int main()
{
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int res = 1;
    for(int i = 0; i < exponent; i++)
    {
        res = res * base;
    }

    printf("%d^%d = %d\n", base, exponent, res);


    return 0;
}

