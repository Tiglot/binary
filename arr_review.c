#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define N 10
#define SIZE ((int) (sizeof(value) / sizeof(value[0])))

void reverse_array();
void seen_digit();
void computing_interest();
void hand_cards();

int main(int argc, char *argv[])
{
    int choice;
    printf("what program would you like to run?:\n");
    printf("1 - reverse_array\n");
    printf("2 - seen_digit\n");
    printf("3 - computing_interest\n");
    printf("4 - hand_cards\n");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            reverse_array();
            break;
        case 2:
            seen_digit();
            break;
        case 3:
            computing_interest();
            break;
        case 4:
            hand_cards();
            break;
        default:
            printf("invalid choice\n");
            break;
    }
    return 0;
}

void reverse_array()
{// testing commits
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

void computing_interest()
{
    int money;

    printf("\nInsert how much money do you have:\n");
    scanf("%d", &money);
    //initially the money is gonna be fixed 100, late I will change it so the user puts the value
    //the program has to take an iterest rate and number of years
    double interest;  
    int years;
    double value[5];
    printf("\nInsert interest rate in percentage:\n");
    scanf("%lf", &interest);

    printf("\nInsert numbers of year:\n");
    scanf("%d", &years);

    //next we are gonna print a table with "Years" and the five interest rates as "i,  i + 1,... i + 4"
    //then the next 5 rows are gonna be the year and the respective value of the compound interrst at the respective rate
    printf("Years   ");
    for (int i = 0; i < years; i++) 
    { 
        printf("%.2lf%%   ", interest + i);
        value[i] = money;
    }
    printf("\n");

    for (int j = 1;j < years; j++) 
    {
        printf("%d  ", j);
        for (int k = 0; k < SIZE; k++) 
        {
            value[k] += (interest + k)/100 * value[k];
            printf("%.2lf    ", value[k]);
        }
        printf("\n");
    }
}

void hand_cards()
{
    bool in_hand[4][13] = {false};


    char suit[] = {'c', 'e', 'o', 'p'};
    char value[] = {'a','2','3','4','5','6','7','8'
                   ,'9','t','j','q', 'k'};
    int num, suits, ranks;

    srand((unsigned) time(NULL));

    printf("Insert number of cards in hand:");
    scanf("%d", &num);
    
    printf("\n");
    while (num > 0) 
    {
        suits = rand() % 4;
        ranks = rand() % 13;

        if (!in_hand[suits][ranks])
        {
            in_hand[suits][ranks] = true;
            num --;
            printf(" %c%c\n", suit[suits], value[ranks]);
        }

    }

    printf("\n");
}
