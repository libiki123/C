/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 2
Milestone:  3
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+




// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


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
		(*addressPtr).apartmentNumber = getInt();
	}

	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", (*addressPtr).postalCode);
	clearKeyboard();

	printf("Please enter the contact's city: ");
	scanf("%41s", (*addressPtr).city);
	clearKeyboard();
}


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers * numbersPtr)
{

	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone((*numbersPtr).cell);
	clearKeyboard();

	char c;
	printf("Do you want to enter a home phone number? (y or n): ");
	c = yes();
	if (c == 1)
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone((*numbersPtr).home);
		clearKeyboard();
	}

	char d;
	printf("Do you want to enter a business phone number? (y or n): ");
	d = yes();
	if (d == 1)
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone((*numbersPtr).business);
		clearKeyboard();
	}
}


// getContact
void getContact(struct Contact * contactPtr)
{
	getName(&(*contactPtr).name);

	getAddress(&(*contactPtr).address);

	getNumbers(&(*contactPtr).numbers);
}
