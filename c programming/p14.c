#include <stdio.h>
int main(){
    int i,j;
    float k;
    char ch;
    for (int i=0;i<=10;i=i+1) {
        printf("%d \n",i);
    }
    for (int j=10;j>=0;j=j-1)
    {
        printf("%d \n",j);
    }
    for (float k=1.0;k<=10.0;k++)
    {
        printf("%f \n",k);
    }
    for (ch='A';ch<='Z';ch++)
    {
        printf("%c \n",ch);
    }
return 0;
}