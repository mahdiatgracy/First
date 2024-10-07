//This is a program to find factorial of any positive integer n.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 1;
    for(int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    printf("%d! = %d\n", n, sum);



    return 0;
}
