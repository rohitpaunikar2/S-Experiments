
#include <stdio.h>

int main()
{
    int n, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    while (n > 0);

    printf("Sum of digits = %d", sum);

    return 0;
}
