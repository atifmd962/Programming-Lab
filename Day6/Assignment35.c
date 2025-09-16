#include <stdio.h>
int main()
{
    int st,en;
    printf("Enter the Starting Limit:- ");
    scanf("%d",&st);
    printf("Enter the Ending Limit:- ");
    scanf("%d",&en);
    for(int i=st;i<=en;i++)
    {
        int c=0;
        if(i<2)
            continue;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            c=c+1;
        }
        if(c==2)
        printf("%d  ",i);
    }
    return 0;
}