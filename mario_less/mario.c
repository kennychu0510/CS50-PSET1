#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
        height = get_int("Height: ");
    }
    while (height<1 || height >8);
    
    
    for (int i=0; i<height; i++)
    {
        for (int j=i+1; j<height; j++)
        {
            printf(" ");
        }
        
        for (int k=0; k<i+1; k++)
        {
            printf("#");
        }
        printf("\n");

    }
    
}