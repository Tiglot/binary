#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void country_codes (int code);

int main(int argc, char *argv[])
{
 
    return 0;
}

void country_codes (int code)
{
    typedef enum countries 
    {
        usa = 1,
        russia = 7,
        france = 33,
        brazil = 55, 
        japan = 81,
    }
    switch (code) 
    {
        case usa:
           printf("usa\n");
           break;
        case russia:
           printf("russia\n");
           break;
        case france:
           printf("france\n");
           break;
        case brazil:
           printf("brazil\n");
           break;
        case japan:
           printf("japan\n");
           break;
        default:
           printf("INVALID\n");
           break;
    }
}       
