#include <stdio.h>
#include <string.h>

int main (void)
{
	char passwd[10];
	int choice;

	printf("Enter your passkey: ");
	scanf("%s", passwd);

	if (strcmp(passwd, "drF1@jfTl!") != 0)
	{
		printf("Wrong passkey\n");

		return 1;
	}

	printf("This time, there will be one question. However, this one is a bit tricky!\n");
	printf("What languages can natively use the ncurses library (without any system calls or anything of that sort)?\n");
	printf("1. C++ only\n2. C and C++\n3. C only\n");
	scanf("%i", &choice);

	if (choice == 2)
	{
		printf("You delt 100 damage to the boss. You won!\n");
		/* printf("Your passkey is: tr@344jL!!\n");
		printf("Switch to the \"lvl4\" directory, type \"./miniboss\", and put in your passkey to advance to the next level.\n"); */
	}
	else
		printf("You lost!\n");

	return 0;
}
