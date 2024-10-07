//This is sln of Qn3
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int flag = 1;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
        }
    }

    if(flag == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}
