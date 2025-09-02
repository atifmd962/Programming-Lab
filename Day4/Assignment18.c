#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:- ");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("%d is Greater",a);
    else
        printf("%d is Greater",b);
    return 0;
}