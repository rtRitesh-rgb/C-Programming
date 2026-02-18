//write a program to print the average of 3 nmbers
#include<stdio.h>
int main(){
    printf("Enter 1st no. : ");
    int a;
    scanf("%d", &a);
    printf("Enter 2nd no. : ");
    int b;
    scanf("%d", &b);
    printf("Enter 3rd no. : ");
    int c;
    scanf("%d", &c);

    printf("Avg of 3 no.: %d \n", (a+b+c)/3);

    return 0;
}