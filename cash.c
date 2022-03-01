#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float owned;
    
    do{
        owned = get_float("Change owed: ");
    }
    while (owned < 0);
    
    //convert
    int remainder = round(owned*100);
    
    //quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢)
    
    int coins = 0;
    
    while (remainder!=0)
    {
        if (remainder >= 25)
        {
            //count no. of quarters (25¢)
            coins += remainder / 25;
            remainder = remainder % 25;
        }
        else if (remainder >= 10)
        {
            //count no. of quarters (10¢)
            coins += remainder / 10;
            remainder = remainder % 10;            
        }
        else if (remainder >= 5)
        {
            //count no. of quarters (5¢)
            coins += remainder / 5;
            remainder = remainder % 5;              
        }
        else
        {
            //count no. of quarters (1¢)
            coins += remainder / 1;
            remainder = remainder % 1;               
        }
    }
    
    printf ("%i\n", coins);

}