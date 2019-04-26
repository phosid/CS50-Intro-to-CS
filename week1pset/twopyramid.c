#include <cs50.h>
#include <stdio.h>

void pyramidheight(void);

int main(void)
{
    pyramidheight();
}

void pyramidheight(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    
    
    for (int j = 0; j < n; j++)
    {
        
        for (int m = 0; m < n - j - 1; m++)
        {
            printf(" ");
        }
        
        for (int k = 0; k <= j; k++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for (int z = 0; z <=j; z++)
        {
            printf("#");
        }
        
        printf("\n");
        
    }
}
