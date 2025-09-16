#include <stdio.h>
int main()
{
    int n,a=0,b=1,s=0,x=0;
    printf("Enter Any Number:- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",a);
        s=a+s;
        x=a+b;
        a=b;
        b=x;
    }
    printf("\n");
    printf("Sum = %d\n",s);
    return 0;
}