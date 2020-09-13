#include<stdio.h>

int main()
{
    int num1, num2, i, num, number, sum;

    printf("Enter first number : ");
    scanf_s("%d", &num1);

    printf("Enter second number : ");
    scanf_s("%d", &num2);

    printf("Armstrong number that between %d and %d :\n", num1, num2);
    for (i = num1; i <= num2; i++)
    {
        sum = 0;
        num = i;

        for (; num > 0; num /= 10)
        {
            number = num % 10;
            sum = sum + number * number * number;
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}