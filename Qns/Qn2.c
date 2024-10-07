//This is sln of Qn2
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int x = 0, y = 1, z;
    printf("Fibonacci series: %d ", x);
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", y);
        z = x;
        x = y;
        y = z + y;
    }


    return 0;
}
