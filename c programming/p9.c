#include <stdio.h>

int main() {
    int age;
    printf("enter your age :");
    scanf("%d", &age);

    if(age >= 18) {
        printf("The Guy is adult \n" );
        printf("They can vote  \n");
        printf("They can Drive \n");
    }
    else if ( age > 13 && age <18 ) {
        printf("teenager \n");
    }

    else{
        printf("Child");

    }

    printf("thank you");

    return 0;


}