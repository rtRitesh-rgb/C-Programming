//Check given no. is divisble by 2 or not
//also if no. is even=1 , if odd=0 output
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("%d", x % 2 == 0 );
    return 0;
}