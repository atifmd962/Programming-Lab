#include <stdio.h>
int main()
{
    int s;
    printf("Enter the Roll number:- ");
    scanf("%d",&s);
    if(s==100)
    {
        printf("\nPresent");
    }
    else
        printf("\nAbsent");
    return 0;
}