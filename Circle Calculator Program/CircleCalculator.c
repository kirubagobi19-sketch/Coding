#include<stdio.h>
#include<math.h>

int main ()
{
    double radius;
    double area;
    double surfaceArea;
    double Volume;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * (radius * radius);
    surfaceArea = 4 * PI * (radius * radius);
    Volume = (4.0 / 3.0 ) * PI * (radius * radius * radius);

    printf("Area: %.2lf \n", area);
    printf("Surface Area : %.2lf \n", surfaceArea);
    printf("Volume: %.2lf \n", Volume);


    return 0;
}