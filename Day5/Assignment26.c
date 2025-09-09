#include <stdio.h>
int main()
{
    char op;
    double n1, n2;
    printf("Enter Operator(+, -, *, /):- ");
    scanf(" %c",&op);
    printf("Enter 2 numbers:- ");
    scanf("%lf %lf", &n1, &n2);
    switch(op)
    {
        case '+': printf("Result = %.2lf\n",n1 + n2); 
        break;
        case '-': printf("Result = %.2lf\n",n1 - n2);
        break;
        case '*': printf("Result = %.2lf\n",n1 * n2);
        break;
        case '/':
            if(n2==0)
                printf("Error!");
            else
                printf("Result = %.2lf\n",n1 / n2);
            break;
        
        default: printf("Invalid Input");
        break;
    }
    return 0;
}