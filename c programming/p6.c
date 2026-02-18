// Swap two variables with & without third variable
#include <stdio.h>
int main(){
    int x,y ;
    printf("Enter two no. : \n");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d , y = %d \n", x,y);
    x = x+y;
    y= x-y;
    x= x-y;
    printf("After swapping without third variable: x = %d , y = %d \n", x,y);
    return 0;
}