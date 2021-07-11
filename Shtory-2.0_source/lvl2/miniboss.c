#include <stdio.h>
#include <string.h>

int main (void)
{
    char passwd[10];
    int p_hp = 100, b_hp = 100, choice1, choice2;

    printf("Enter your passkey: ");
    scanf("%s", passwd);

    if (strcmp(passwd, "A!@65hzRX1") != 0)
    {
        printf("Wrong passkey\n");

        return 1;
    }

    printf("What does \"echo\" do?\n");
    printf("1. Read input\n2. Echo back text\n3. Nothing\n");
    scanf("%i", &choice1);

    if (choice1 == 2)
    {
        b_hp -= 50;

        printf("You delt 50 damage to the boss. He has 50 HP left.\n");
    }
    else
    {
        p_hp -= 50;

        printf("The boss delt 50 damage to you. You have 50 HP left.\n");
    }

    printf("What does \"./\" refer to?\n");
    printf("1. The current directory\n2. The root directory\n3. Your home directory\n");
    scanf("%i", &choice2);

    if (choice2 == 1)
    {
        b_hp -= 50;

        printf("You delt 50 damage to the boss.\n");

        if (b_hp == 0)
        {
            printf("You won!\n");
            /* printf("Your passkey is: drF1@jfTl!\n\n");
            printf("Switch to the \"lvl3\" directory, type \"./miniboss\", and put in your passkey to advance to the next level.\n");

            return 0; */
        }
        else
        {
            printf("Oops! You didn't defeat the boss in time! Try again.\n");

            return 0;
        }
    }
    else
    {
        p_hp -= 50;

        printf("The boss delt 50 damage to you.\n");

        if (p_hp == 0)
            printf("You lost!\n");
        else
            printf("Oops! You didn't defeat the boss in time! Try again.\n");
    }

    return 0;
}
