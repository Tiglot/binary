#include <stdio.h>
#include <stdbool.h>

#define N 10

void reverse_array(int arr[N]);
void seen_digit(long n);

int main(int argc, char *argv[])
{
//    int arr[N];
//   printf("Insert numbers into the array:\n");
    //   for (int j = 0; j < N; j++
    //{
      //  scanf("%d", &arr[j]);
    //}
    //reverse_array(arr);
    
    long n;
    printf("Now choose a number of your liking:");
    scanf("%ld", &n);
    seen_digit(n);
    return 0;
}

void reverse_array(int arr[N])
{
     for (int i = N - 1; i >= 0; i--) 
    {
        printf("%d, ", arr[i]);
    }
}

void seen_digit(long n)
{
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
