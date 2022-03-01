#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < n);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    
    while (n < end)
    {
        years++;
        n = n + n/3 - n/4;
    }
    

    // TODO: Print number of years
    printf("Years: %i\n", years);
}