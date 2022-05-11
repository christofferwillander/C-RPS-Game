/*
* Programmer: Christoffer Willander		Date completed: November 20th, 2017
* Instructor: Carina Nilsson			Class: DV1550
*
* A simple ROCK-PAPER-SCISSORS game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int playerMove, computerMove, nameLength;
	char playerName[30];
	srand(time(NULL));

	playerMove = 0; /* Initializes playerMove before entering while-loop */

	printf("Welcome to the game 'ROCK-PAPER-SCISSORS'!\n\n");
	printf("Enter your name, please: ");
	fgets(playerName, sizeof(playerName), stdin);

	nameLength = strlen(playerName); 
	if (playerName[nameLength - 1] == '\n')
		playerName[nameLength - 1] = 0; /* Removes \n from playerName */

	while (playerMove != -1) /* This while-loop iterates until playerMove == -1 */
	{
		computerMove = rand() % 3;
		printf("\n\nWhat is your choice?\n");
		printf("ROCK(0), PAPER(1), SCISSORS(2), or end game (-1)\n");
		scanf("%d", &playerMove);

		switch (playerMove)
		{
		case 0: /* This code will execute if playerMove == 0 */
			if (computerMove == playerMove)
			{
				printf("This game is a draw!");
				printf("\nComputer has ROCK!");
			}
			else if (computerMove == 1)
			{
				printf("Sorry %s, you lost!", playerName);
				printf("\nComputer has PAPER!");
			}
			else
			{
				printf("Congratulations %s, you won!", playerName);
				printf("\nComputer has SCISSORS!");
			}
			break;

		case 1: /* This code will execute if playerMove == 1 */
			if (computerMove == playerMove)
			{
				printf("This game is a draw!");
				printf("\nComputer has PAPER!");
			}
			else if (computerMove == 2)
			{
				printf("Sorry %s, you lost!", playerName);
				printf("\nComputer has SCISSORS!");
			}
			else
			{
				printf("Congratulations %s, you won!", playerName);
				printf("\nComputer has ROCK!");
			}
			break;

		case 2: /* This code will execute if playerMove == 2 */
			if (computerMove == playerMove)
			{
				printf("This game is a draw!");
				printf("\nComputer has SCISSORS!");
			}
			else if (computerMove == 0)
			{
				printf("Sorry %s, you lost!", playerName);
				printf("\nComputer has ROCK!");
			}
			else
			{
				printf("Congratulations %s, you won!", playerName);
				printf("\nComputer has PAPER!");
			}
			break;

		case -1: /* This code will execute if playerMove == -1 */
			printf("Goodbye, have a nice day!");
			getchar();
			break;

		default: /* This code will execute if the player has made an incorrect selection */
			printf("\nWrong input! Please try again.");
			break;
		}
	}

	getchar();
	return 0;
}