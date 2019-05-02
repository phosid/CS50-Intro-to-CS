#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    int key = atoi(argv[1]); // convert the argument to an integer as opposed to a string
    if (key >= 0) // ensures that the key entered by the user is zero or above.
    {
        string p = get_string("plaintext: "); // gets plain text from user
        int length = strlen(p);
        printf("ciphertext: ");
        for (int i = 0; i < length; i++) // beginning of the for loop which iterates over the plain text
        {
            if (isalpha(p[i])) // checks to see if its an alphabetical character
            {
                if (islower(p[i])) // lower-case letters have different ASCII values so this algorithm wraps around once you pass z
                {
                    printf("%c", ((((p[i] - 97) + key) % 26) + 97));
                }
                else if (isupper(p[i])) // upper-case letters have different ASCII values so this algorithm wraps around once you pass Z
                {
                    printf("%c", ((((p[i] - 65) + key) % 26) + 65));
                }
            }
            else
            {
                printf("%c", p[i]); // if it is not an alphabetical character, this just prints what was typed in
            }
        }
        printf("\n");
        return 0;
        }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}
