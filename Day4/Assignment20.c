#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n<=0)
        printf("%d is not a whole number",n);
    else
        printf("%d is a whole number",n);
    return 0;
}