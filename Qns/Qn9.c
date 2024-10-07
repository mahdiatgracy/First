//This is sln of Qn9
#include<stdio.h>

int main()
{
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    int OddSum = 0, evenSum = 0;
    for(int i = start; i <= end; i++)
    {
        if(i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
        else
        {
            OddSum = OddSum + i;
        }
    }

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d", OddSum);


    return 0;
}

