#include <stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter Units:- ");
    scanf("%d",&unit);
    if(unit<=100)
    {
        bill = 5 * unit;
        printf("Electricity Bill = %.2f",bill);
    }
    else if(unit>=101 && unit<=200)
    {
        bill = 7 * unit;
        printf("Electricity Bill = %.2f",bill);
    }
    else
    {
        bill = 10 * unit;
        printf("Electricity Bill = %.2f",bill);
    }
    return 0;
}