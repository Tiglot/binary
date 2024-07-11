#include <stdio.h>
#include <stdbool.h>

#define N 10

void reverse_array();
void seen_digit();

int main(int argc, char *argv[])
{
    int choice;
    printf("what program would you like to run?:\n");
    printf("1 - reverse_array\n");
    printf("2 - seen_digit\n");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            reverse_array();
            break;
        case 2:
            seen_digit();
            break;
        default:
            printf("invalid choice\n");
            break;
    }
    return 0;
}

void reverse_array()
{
    int arr[N];
    printf("Insert numbers into the array:\n");
    for (int j = 0; j < N; j++)
    {
        scanf("%d", &arr[j]);
    }

    for (int i = N - 1; i >= 0; i--) 
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void seen_digit()
{
    long n;
    printf("Now choose a number of your liking:");
    scanf("%ld", &n);

    bool digit_repeat[10] = {false};
    int digit;
    int which;

    while (n > 0) 
    {
        digit = n % 10;
        if (digit_repeat[digit])
            break;
        digit_repeat[digit] = true;
        n /= 10;
    }

    if (n > 0)
    {
        printf("Repeated digit found! %d repeats\n", digit);
    }
    else 
    {
        printf("digits don't repea\n");
    }
}
