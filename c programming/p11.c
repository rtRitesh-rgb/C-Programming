#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks(1-100): \n");
    scanf("%d", &marks);

    if (marks > 30 ) {
        printf(" Person is passed \n");
        if (marks > 95 ) {
            printf ( " He topped the class \n");
        }
    }
    else if (marks <= 30) {
        printf("Person is fail");
    }
    else {
        printf("Wrong marks");
    }
    
    return 0;

}
