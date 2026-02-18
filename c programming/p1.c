//Calculate area of square and area of circle
#include <stdio.h>
int main(){
    int side;
    printf("Enter Side Of square :");
    scanf("%d",&side);
    printf("Area of square : %d\n",side*side);

    float r;
    printf("Enter radius of circle :");
    scanf("%f",&r);
    printf("Area Of Circle : %f", 3.14*r*r);

    return 0;
}