#include<stdio.h>
int main()
{
    long int factorial = 1;
    int Num = 0, Result = 0;

    printf("Enter a Number : \n");
    scanf("%d",&Num);

    if(Num != 0)
    {
        for(factorial = 1; Num ; Num--)
        {
            factorial = factorial * Num; 
        }
        printf("%d\n",factorial);
    }
    else
    {
        printf("%d is a Zero\n");
    }
    return 0;
}

// 5 * 4 * 3 * 2 * 1 = 120