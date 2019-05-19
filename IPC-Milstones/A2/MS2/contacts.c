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
#include "contacts.h"
#include "contactHelpers.h"

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:



// This source file needs to "know about" the functions you prototyped
//         in the contact helper header file too
// HINT-1: You will want to use the new yes() and getInt() functions to help
//         simplify the data input process and reduce redundant coding
//
// HINT-2: Put the header file name in double quotes so the compiler knows
//         to look for it in the same directory/folder as this source file
//         #include your contactHelpers header file on the next line:



// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        function definitions below...            |
// +-------------------------------------------------+
//
// HINT:  Update these function to use the helper 
//        functions where applicable (ex: yes() and getInt() )

// getName:
void getName(struct Name * namePtr)
{

	printf("Please enter the contact's first name: ");
	scanf("%31s", (*namePtr).firstName);
	clearKeyboard();

	char a = 0;
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	a = yes();
	if (a == 1)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%7s", (*namePtr).middleInitial);
		clearKeyboard();
	}

	printf("Please enter the contact's last name: ");
	scanf("%36s", (*namePtr).lastName);
	clearKeyboard();

	return;
}


// getAddress:
void getAddress(struct Address * addressPtr)
{
	printf("Please enter the contact's street number: ");
	(*addressPtr).streetNumber = getInt();

	printf("Please enter the contact's street name: ");
	scanf("%[^\n]", (*addressPtr).street);
	clearKeyboard();

	char b;
	printf("Do you want to enter an apartment number? (y or n): ");
	b = yes();
	if (b == 1)
	{
		printf("Please enter the contact's appartment number: ");
		scanf("%d", &(*addressPtr).apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", (*addressPtr).postalCode);
	clearKeyboard();

	printf("Please enter the contact's city: ");
	scanf("%41s", (*addressPtr).city);
	clearKeyboard();
}


// getNumbers:
// NOTE:  Also modify this function so the cell number is
//        mandatory (don't ask to enter the cell number)
void getNumbers(struct Numbers * numbersPtr)
{

	printf("Please enter the contact's cell phone number: ");
	scanf("%21s", (*numbersPtr).cell);
	clearKeyboard();

	char c;
	printf("Do you want to enter a home phone number? (y or n): ");
	c = yes();
	if (c == 1)
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%21s", (*numbersPtr).home);
		clearKeyboard();
	}

	char d;
	printf("Do you want to enter a business phone number? (y or n): ");
	d = yes();
	if (d == 1)
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%21s", (*numbersPtr).business);
		clearKeyboard();
	}
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// +-------------------------------------------------+

// getContact
void getContact(struct Contact * contactPtr)
{
	getName(&(*contactPtr).name);

	getAddress(&(*contactPtr).address);

	getNumbers(&(*contactPtr).numbers);
}