/*

Name: FinalProject

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 11-25-16

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 15
#define MAX_WORDS 6


int jailcell();
int room2();
int room3();
int room4();
int room5();
int room6();
int room7();
int room8();
int room9();

int main()
{
	int game_index = 1;
	int response = 0;

	do
	{
		game_index < 10;
		switch (game_index)
		{
		case 1: 
			response = jailcell();
			break;
		case 2:
			response = room2();
			break;
		case 3:
			response = room3();
			break;
		case 4:
			response = room4();
			break;
		case 5:
			response = room5();
			break;
		case 6:
			response = room6();
			break;
		case 7:
			response = room7();
			break;
		case 8:
			response = room8();
			break;
		case 9:
			response = room9();
			break;
		}
		if (response == -1)
		{
			game_index = 1; 
			continue;
		}
		else if (response == 1)
		{
			break;
		}

	} while (game_index ++);
	
	return 0;
}

int jailcell()
{
	char str[MAX_SIZE];
	char a[MAX_SIZE] = "pick lock\n";
	int i, c;
	int z = 0;
	time_t t;
	int n = 1;

	printf("You wake up rubbing the back of your head with a massive headache. The last thing you remeber was getting\nhit in the back of the head ");
	printf("as you were trying to open the lock on the crown jewel case.");
	printf("\nYou quickly realize where you are and flip the mattress corner up and find the spare wire lockpick\n");
	printf("that you made from the spring bed frame last time.\n");
	printf("\nWhat do you want to do? ");
	fgets(str, MAX_SIZE, stdin);

	while ((strcmp(str, a) != 0))
	{
		printf("That's not a valid command, please enter a valid command: ");
		fgets(str, MAX_SIZE, stdin);
	}
	do
	{
		/* Intializes random number generator */
		srand((unsigned)time(&t));

		/* Prints random numbers from 1-6 */
		for (i = 0; i < n; i++)
		{
			printf("%d\n", rand() % 6+1);
			z = rand() % 6 + 1;
		}
		if (z == 3 || z == 4 || z == 5 || z == 6)
		{
			printf("\nThe lock didn't open, quick try again\n");
			printf("\nWhat do you want to do ? ");
			fgets(str, MAX_SIZE, stdin);
		}
	} while (z !=1 || z != 2);
	
	if (z == 1 || z == 2)
	{
		printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
		return 0;
	}

}


int room2()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";  

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}

int room3()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}

}

int room4()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}

int room5()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}

int room6()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}

int room7()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}

int room8()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}

int room9()
{
	char str[MAX_SIZE];
	char a[] = "pick lock";
	char b[] = "break window";
	char d[] = "north";

	int i, n, c;
	int z = 0;
	time_t t;
	n = 1;

	printf("\nThe jail cell door swings open, you step out and you quickly survey the area. There's a window to the east\n");
	printf("There's a shut door to the North, and there's a locked jewel case to your right. You dont see any guards nearby\n");
	printf("What would you like to do? ");

	fgets(str, MAX_SIZE, stdin);

	if (strcmp(str, b) == 0)
	{
		printf("\nYou break the window and escape down the side of the castle\n");
		printf("GAME OVER\n");
		return 1;
	}
	else if ((d[strcspn(d, "\n")] = '\0') == 0)

	{
		return 0;
	}
	else
	{
		do
		{
			/* Intializes random number generator */
			srand((unsigned)time(&t));

			/* Prints random numbers from 1-6 */
			for (i = 0; i < n; i++)
			{
				//printf("%d\n", rand() % 6+1);
				z = rand() % 6 + 1;
			}

			//Random chance decision 
			if (z == 1 || z == 2)
			{
				printf("\nYou hear the tumbler in the lock turn and click, you were successful!\n\n");
				break;
			}
			else
			{
				printf("The lock didn't open, quick try again\n");
				printf("Enter your choice: ");
				fgets(str, MAX_SIZE, stdin);
			}
		} while (strcmp(str, a) == 0);

		return 0;
	}
}
