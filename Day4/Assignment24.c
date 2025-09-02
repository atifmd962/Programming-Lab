#include <stdio.h>
int main() 
{
    printf("Size of int: %lu bytes\n", (unsigned long)sizeof(int));
    printf("Size of float: %lu bytes\n", (unsigned long)sizeof(float));
    printf("Size of double: %lu bytes\n", (unsigned long)sizeof(double));
    printf("Size of char: %lu byte\n", (unsigned long)sizeof(char));
    return 0;
}