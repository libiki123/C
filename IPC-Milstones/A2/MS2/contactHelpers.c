/* -------------------------------------------
Name:           
Student number: 
Email:          
Section:        
Date:           
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
int getInt(void)
{
	int num = 0;
	char x;
	scanf("%d%c", &num, &x);
	
	while (x != '\n')
	{
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &num, &x);
	}

	return num;
}
// getIntInRange function definition goes here:
int getIntInRange(int low, int high)
{
	int num = 0;
	num = getInt();

	while (num < 100 || num > 500)
	{
		printf("*** OUT OF RANGE *** <Enter a number between 100 and 500>: ");
		num = getInt();
	}

	return num;
}

// yes function definition goes here:
int yes(void)
{
	int value = 0;
	char yon;
	char x;
	scanf("%c%c", &yon, &x);

	while ((yon != 'y' && yon != 'Y' && yon != 'n' && yon != 'N') || x != '\n')
	{
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf("%c%c", &yon, &x);
	
	}
	if (x == '\n')
	{
		if (yon == 'y' || yon == 'Y')
		{
			value = 1;
			return value;
		}
		if (yon == 'n' || yon == 'N')
		{
			value = 0;
			return value;
		}
	}

	return 0;
}
// menu function definition goes here:
int menu(void)
{
	int opt = 0;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");

	printf("Select an option:> ");
	scanf("%d", &opt);

	while (opt < 0 || opt > 6)
	{
		printf("*** OUT OF RANGE *** <Enter a number between 0 and 6>: ");
		scanf("%d", &opt);
	}

	return opt;
}

// ContactManagerSystem function definition goes here:
void ContactManagerSystem(void)
{
	int opt = 0;
	int exit = 0;
	char yon;
	opt = menu();

	while (opt >= 0 && opt <= 6 && exit == 0)
	{ 
		switch (opt)
		{
			case 1:
			{
				printf("\n<<< Feature 1 is unavailable >>>\n\n");
				clearKeyboard();
				pause();
				printf("\n");
				opt = menu();
				break;
			}
			case 2:
			{
				printf("\n<<< Feature 2 is unavailable >>>\n\n");
				clearKeyboard();
				pause();
				printf("\n");
				opt = menu();
				break;
			}
			case 3:
			{
				printf("\n<<< Feature 3 is unavailable >>>\n\n");
				clearKeyboard();
				pause();
				printf("\n");
				opt = menu();
				break;
			}
			case 4:
			{
				printf("\n<<< Feature 4 is unavailable >>>\n\n");
				clearKeyboard();
				pause();
				printf("\n");
				opt = menu();
				break;
			}
			case 5:
			{
				printf("\n<<< Feature 5 is unavailable >>>\n\n");
				clearKeyboard();
				pause();
				printf("\n");
				opt = menu();
				break;
			}
			case 6:
			{
				printf("\n<<< Feature 6 is unavailable >>>\n\n");
				clearKeyboard();
				pause();
				printf("\n");
				opt = menu();
				break;
			}
			case 0:
			{
				clearKeyboard();
				printf("\nExit the program? (Y)es/(N)o: ");
				scanf("%c", &yon);
				
				if (yon == 'y' || yon == 'Y')
				{
					printf("\nContact Management System: terminated\n");
					exit = 1;
				}
				else
				{
					printf("\n");
					opt = menu();
				}
				break;
			}
			default:
				break;
		}
	}
}