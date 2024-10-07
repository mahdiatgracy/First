#include<math.h>
#include<stdio.h>

int main()
{
    int r;
    printf("Enter the radius of a circle: " );
    scanf("%d",&r);

    float A = M_PI * r *r;
    float cir = 2 * M_PI * r;
    printf("Area: %f\n", A);
    printf("Circumference: %f\n", cir);

    return 0;
}
