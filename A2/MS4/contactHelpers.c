/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"


// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):
#define MAXCONTACTS 5


//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
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

// getIntInRange:
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

// yes:
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

// menu:
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

// ContactManagerSystem:
void ContactManagerSystem(void)
{
	int opt = 0;
	int exit = 0;
	char yon;
	struct Contact contact[MAXCONTACTS] =
	{ { { "Rick" ,{ '\0' }, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" } },
	{
		{ "Maggie", "R.", "Greene" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9051112222", "9052223333", "9053334444" } },
	{
		{ "Morgan", "A.", "Jones" },
	{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	{ "7051112222", "7052223333", "7053334444" } },
	{
		{ "Sasha",{ '\0' }, "Williams" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9052223333", "9052223333", "9054445555" } },
	};
	int size = 0;

	opt = menu();

	while (opt >= 0 && opt <= 6 && exit == 0)
	{
		switch (opt)
		{
		case 1:
		{
			printf("\n");
			displayContacts(contact, size);
			clearKeyboard();
			pause();
			printf("\n");
			opt = menu();
			break;
		}
		case 2:
		{
			printf("\n");
			addContact(contact, size);
			pause();
			printf("\n");
			opt = menu();
			break;
		}
		case 3:
		{
			printf("\n");
			updateContact(contact, size);
			pause();
			printf("\n");
			opt = menu();
			break;
		}
		case 4:
		{
			printf("\n");
			deleteContact(contact, size);
			pause();
			printf("\n");
			opt = menu();
			break;
		}
		case 5:
		{
			printf("\n");
			searchContacts(contact, size);
			pause();
			printf("\n");
			opt = menu();
			break;
		}
		case 6:
		{
			printf("\n");
			sortContacts(contact, size);
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

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contact[], int size, const char cellNum[])
{
	int i;
	for (i = 0; i < MAXCONTACTS; i++)
	{

		if (strcmp(contact[i].numbers.cell, cellNum) == 0)
			return i;

	}

	return -1;
}

// displayContactHeader
void displayContactHeader(void)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}

// displayContactFooter
void displayContactFooter(int size)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", size);
}

// displayContact:
void displayContact(const struct Contact *contact)
{
	int emptyInt = 0;
	if (strcmp((*contact).name.middleInitial, "\0") == 0)
		printf(" %s %s\n", (*contact).name.firstName, (*contact).name.lastName);
	else
		printf(" %s %s %s\n", (*contact).name.firstName, (*contact).name.middleInitial, (*contact).name.lastName);

	printf("    C: %-10s   H: %-10s   B: %-10s\n", (*contact).numbers.cell, (*contact).numbers.home, (*contact).numbers.business);
	printf("       %d %s, ", (*contact).address.streetNumber, (*contact).address.street);

	if ((*contact).address.apartmentNumber != emptyInt)
		printf("Apt# %d, ", (*contact).address.apartmentNumber);

	printf("%s, %s\n", (*contact).address.city, (*contact).address.postalCode);
}

// displayContacts:
void displayContacts(const struct Contact contact[], int size)
{
	int i;
	int count = 0;
	displayContactHeader();
	for (i = 0; i < MAXCONTACTS; i++)
	{
		if (strcmp(contact[i].numbers.cell, "\0") != 0)
		{
			displayContact(&contact[i]);
			count++;
		}
	}
	displayContactFooter(count);

}

// searchContacts:
void searchContacts(const struct Contact contact[], int size)
{
	char findCel[11];
	int x = 0;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(&findCel);
	x = findContactIndex(contact, &size, &findCel);
	if (x != -1)
	{
		printf("\n");
		displayContact(&contact[x]);
		printf("\n");
	}
	else
		printf("*** Contact NOT FOUND ***\n");

}

// addContact:
void addContact(struct Contact contact[], int size)
{
	int a = 0;
	int i;
	for (i = 0; i < MAXCONTACTS; i++)
	{
		if (strcmp(contact[i].numbers.cell, "\0") != 0)
			a++;
	}
	if (a == 5)
	{
		printf("*** ERROR: The contact list is full! ***\n");
		clearKeyboard();
	}
	else
	{
		for (i = 0; i < MAXCONTACTS; i++)
		{
			if (strcmp(contact[i].numbers.cell, "\0") == 0)
				getContact(&contact[i]);
		}
		printf("--- New contact added! ---\n");
	}
}

// updateContact:
void updateContact(struct Contact contact[], int size)
{
	char findCel;
	int x = 0;
	int a = 0, b = 0, c = 0;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(&findCel);
	x = findContactIndex(contact, size, &findCel);

	if (x != -1)
	{
		printf("\nContact found:\n");
		displayContact(&contact[x]);
		printf("\n");

		printf("Do you want to update the name? (y or n): ");
		a = yes();
		if (a == 1)
			getName(&contact[x].name);

		printf("Do you want to update the address? (y or n): ");
		b = yes();
		if (b == 1)
			getAddress(&contact[x].address);

		printf("Do you want to update the numbers? (y or n): ");
		c = yes();
		if (c == 1)
			getNumbers(&contact[x].numbers);

		printf("--- Contact Updated! ---\n");
	}
	else
		printf("*** Contact NOT FOUND ***\n");
}

// deleteContact:
void deleteContact(struct Contact contact[], int size)
{
	char findCel[11];
	int x = 0;
	int a = 0;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(&findCel);
	x = findContactIndex(contact, &size, &findCel);

	if (x != -1)
	{
		printf("\nContact found:\n");
		displayContact(&contact[x]);
		printf("\n");

		printf("CONFIRM: Delete this contact? (y or n): ");
		a = yes();
		if (a == 1)
		{
			strcpy(contact[x].numbers.cell, "\0");
			printf("--- Contact deleted! ---\n");
		}
	}
}

// sortContacts:
void sortContacts(struct Contact contact[], int size)
{
	printf("<<< Feature to sort is unavailable >>>\n");
}