#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cardnumber = 4222222222222;
    long secondnumber = cardnumber % 100;
    secondnumber /= 10;
    printf("%lu\n", secondnumber);
    long fourthnumber = (cardnumber/100) % 100;
    fourthnumber /= 10;
    printf("%lu\n", fourthnumber);
    long sixthnumber = (cardnumber/10000) % 100;
    sixthnumber /= 10;
    printf("%lu\n", sixthnumber);
    long eighthnumber = (cardnumber/1000000) % 100;
    eighthnumber /= 10;
    printf("%lu\n", eighthnumber);
    long tenthnumber = (cardnumber/100000000) % 100;
    tenthnumber /= 10;
    printf("%lu\n", tenthnumber);
    long twelfthnumber = (cardnumber/10000000000) % 100;
    twelfthnumber /= 10;
    printf("%lu\n", twelfthnumber);
    long fourteenthnumber = (cardnumber/(1000000000000)) % 100;
    fourteenthnumber /= 10;
    printf("%lu\n", fourteenthnumber);
    long sixteenthnumber = (cardnumber/100000000000000) % 100;
    sixteenthnumber /= 10;
    printf("%lu\n", sixteenthnumber);
    long secondproduct = secondnumber * 2;
    long fourthproduct = fourthnumber * 2;
    long sixthproduct = sixthnumber * 2;
    long eighthproduct = eighthnumber * 2;
    long tenthproduct = tenthnumber * 2;
    long twelfthproduct = twelfthnumber * 2;
    long fourteenthproduct = fourteenthnumber * 2;
    long sixteenthproduct = sixteenthnumber * 2;
    printf("%lu, %lu, %lu, %lu, %lu, %lu, %lu, %lu\n", secondproduct, fourthproduct, sixthproduct, eighthproduct, tenthproduct, twelfthproduct, fourteenthproduct, sixteenthproduct);

    long seconddigit1 = secondproduct % 10;
    long seconddigit2 = secondproduct / 10;
    printf("%lu, %lu\n", seconddigit1, seconddigit2);

    long fourthdigit1 = fourthproduct % 10;
    long fourthdigit2 = fourthproduct / 10;
    printf("%lu, %lu\n", fourthdigit1, fourthdigit2);

    long sixthdigit1 = sixthproduct % 10;
    long sixthdigit2 = sixthproduct / 10;
    printf("%lu, %lu\n", sixthdigit1, sixthdigit2);
    
    long eighthdigit1 = eighthproduct % 10;
    long eighthdigit2 = eighthproduct / 10;
    printf("%lu, %lu\n", eighthdigit1, eighthdigit2);
    
    long tenthdigit1 = tenthproduct % 10;
    long tenthdigit2 = tenthproduct / 10;
    printf("%lu, %lu\n", tenthdigit1, tenthdigit2);

    long twelfthdigit1 = twelfthproduct % 10;
    long twelfthdigit2 = twelfthproduct / 10;
    printf("%lu, %lu\n", twelfthdigit1, twelfthdigit2);

    long fourteenthdigit1 = fourteenthproduct % 10;
    long fourteenthdigit2 = fourteenthproduct / 10;
    printf("%lu, %lu\n", fourteenthdigit1, fourteenthdigit2);

    long sixteenthdigit1 = sixteenthproduct % 10;
    long sixteenthdigit2 = sixteenthproduct / 10;
    printf("%lu, %lu\n", sixteenthdigit1, sixteenthdigit2);
   
    long sum = seconddigit1 + seconddigit2 + fourthdigit1 + fourthdigit2 + sixthdigit1 + sixthdigit2 + eighthdigit1 + eighthdigit2 + tenthdigit1 + tenthdigit2 + twelfthdigit1 + twelfthdigit2 + fourteenthdigit1 + fourteenthdigit2 + sixteenthdigit1 + sixteenthdigit2;
    printf("%lu\n", sum);
    
    long firstnumber = cardnumber % 10;
    printf("%lu", firstnumber);
    long thirdnumber = cardnumber % 1000 /100;
    printf("%lu", thirdnumber);
    long fifthnumber = cardnumber % 100000 / 10000;
    printf("%lu", fifthnumber);
    long seventhnumber = cardnumber % 10000000 / 1000000;
    printf("%lu", seventhnumber);
    long ninthnumber = cardnumber % 1000000000 / 100000000;
    printf("%lu", ninthnumber);
    long eleventhnumber = cardnumber % 100000000000 / 10000000000;
    printf("%lu", eleventhnumber);
    long thirteenthnumber = cardnumber % 10000000000000 / 1000000000000;
    printf("%lu", thirteenthnumber);
    long fifteenthnumber = cardnumber % 1000000000000000 / 100000000000000;
    printf("%lu\n", fifteenthnumber);
    
    sum += firstnumber + thirdnumber + fifthnumber + seventhnumber + ninthnumber + eleventhnumber + thirteenthnumber + fifteenthnumber;
    printf("%lu\n", sum);
}
