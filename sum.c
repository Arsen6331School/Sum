#include <stdio.h>

const int INT_AMOUNT = 10;

int main() 
{
    int sum = 0;
    for (int i = 1; i <= INT_AMOUNT; i++)
    {
        int input;
        printf("Input integer %i: ", i);
        scanf("%i", &input);
        sum += input;
    }
    printf("The sum is: %i\n", sum);
}