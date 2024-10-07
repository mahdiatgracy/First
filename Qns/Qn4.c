//This is sln of Qn4
#include<math.h>
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

    printf("Manual calculation: %d\n", res);


    float res2 = pow(base,exponent);
    printf("Using pow: %f", res2);



    return 0;
}
