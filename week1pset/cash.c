#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int cents, quarters, dimes, nickels, pennies, totalcoins;

    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);
    
    cents = round(dollars * 100);
    
    if (cents >= 0)
    {
        quarters = cents/25;
        dimes = (cents - (25*quarters))/10;
        nickels = (cents - (25*quarters) - (10*dimes))/5;
        pennies = cents - (25*quarters) - (10*dimes) - (5*nickels);
        totalcoins = quarters + dimes + nickels + pennies;
        printf("%i\n", totalcoins);
    }
}
