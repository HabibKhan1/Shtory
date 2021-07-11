#include <stdio.h>

int main (void)
{
    int x;

    printf("A (mini) boss approaches you and deals 25 damage. You have 75 HP left.\n");
    printf("What does \"cat\" do?\n");
    printf("1. Print words\n2. Display the contents of a file\n3. Nothing\n");
    scanf("%i", &x);

    if (x == 2)
    {
        printf("You delt 100 damage to the boss. You won!\n");
        printf("Your passkey is: A!@65hzRX1\n\n");
        printf ("Switch to the \"lvl2\" directory, type \"./miniboss\", and put in your passkey to advance to the next level.\n");
    }
    else
    {
        printf("The boss dealt 75 damage. You lost!\n");
        printf("Try again\n");
    }

    return 0;
}
