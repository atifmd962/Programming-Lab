#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter Any Number:- ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}