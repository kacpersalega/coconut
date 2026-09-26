#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_SIZE   20

char allowed_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$\%^&*()?{}";

int main()
{
    srand(time(NULL));

    char password[PASSWORD_SIZE];

    printf("Your password is: ");
    for (int i = 0; i < PASSWORD_SIZE; i++)
    {
        int random_number = rand() % sizeof(allowed_characters);
        password[i] = allowed_characters[random_number];
        printf("%c", password[i]);
    }
    printf("\n");

  
}