#include <stdio.h> 
#include <limits.h> 
#include <float.h> 
 
int main() { 
    printf("char: %zu bytes | Range: %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX); 
    printf("unsigned char: %zu bytes | Range: 0 to %u\n", sizeof(unsigned char), UCHAR_MAX); 
 
    printf("int: %zu bytes | Range: %d to %d\n", sizeof(int), INT_MIN, INT_MAX); 
    printf("unsigned int: %zu bytes | Range: 0 to %u\n", sizeof(unsigned int), UINT_MAX); 
 
    printf("float: %zu bytes | Range: %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX); 
    printf("double: %zu bytes | Range: %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX); 
 
    return 0; 
} 
