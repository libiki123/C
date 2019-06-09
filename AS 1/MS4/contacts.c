/* -------------------------------------------
Name: Anh-Bang Truong (Ethan)
Student number: 124753179
Email: libiki123@gmail.com
Section: SPP
Date: Mar 12, 2018
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:



// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:

void getName(struct Name * namePtr)
{

	printf("Please enter the contact's first name: ");
	scanf(" %31s", (*namePtr).firstName);

	char a = 0;
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &a);
	if (a == 'y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7s", (*namePtr).middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf(" %36s", (*namePtr).lastName);

	return;
}





// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:

void getAddress(struct Address * addressPtr)
{
	printf("Please enter the contact's street number: ");
	scanf("%d%*c", &(*addressPtr).streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %41s", (*addressPtr).street);

	char b;
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("  %c", &b);
	if (b == 'y')
	{
		printf("Please enter the contact's appartment number: ");
		scanf(" %d", &(*addressPtr).apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]", (*addressPtr).postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %41s", (*addressPtr).city);
}



// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:



void getNumbers(struct Numbers * numbersPtr)
{
	char c;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &c);
	if (c == 'y' || c == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %21s", (*numbersPtr).cell);
	}

	char d;
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &d);
	if (d == 'y' || d == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %21s", (*numbersPtr).home);
	}

	char e;
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &e);
	if (e == 'y' || e == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %21s", (*numbersPtr).business);
	}
}
