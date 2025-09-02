#include <stdio.h>
int main()
{
    char s;
    printf("Enter Head or Tails:- ");
    scanf("%c",&s);
    if(s=='h' || s=='H')
        printf("Heads!");
    else
        printf("Tails!");
    return 0;
}