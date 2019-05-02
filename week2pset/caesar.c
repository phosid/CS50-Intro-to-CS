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
    int key = atoi(argv[1]);
    if (key > 0)
    {
        string p = get_string("plaintext: ");
        int length = strlen(p);
        printf("ciphertext: ");
        for (int i = 0; i < length; i++)
        {
            if (isalpha(p[i]))
            {
                if (islower(p[i]))
                {
                    printf("%c", ((((p[i] - 97) + key) % 26) + 97));
                }
                else if (isupper(p[i]))
                {
                    printf("%c", ((((p[i] - 65) + key) % 26) + 65));
                }
            }
            else
            {
                printf("%c", p[i]);
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
