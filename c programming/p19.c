#include <stdio.h>
int main(){
    int n;
    do {
        scanf("%d", &n);
        printf("%d \n", n);

        if(n% 2 != 0) {
            break;
        }
    } while (1);
    printf("Loop ended because an odd number was entered.\n");

    return 0;
}