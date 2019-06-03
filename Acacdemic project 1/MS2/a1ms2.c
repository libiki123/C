/* -------------------------------------------
Name: Anh-Bang truong (Ethan)
Student number: 124753179
Email: atruong17@myseneca.ca
Section: IPC144_SPP
Date: Mar 5, 2018
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

// clear empties the input buffer


int main(void)
{
	// Declare variables here:

	struct Name nme = { { "" } };
	struct Address ads[2] = { { 0,"" } };
	struct Numbers nbs = { { "" } };

    // Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");

    // Contact Name Input:
	
	printf("Please enter the contact's first name: ");
	scanf(" %31s", nme.firstName);

	char a = 0;
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &a);
	if (a == 'y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7s", nme.middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf(" %36s", nme.lastName);

    // Contact Address Input:

	printf("Please enter the contact's street number: ");
	scanf(" %d", &ads[0].streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %41s", ads[1].street);

	char b;
	printf("Do you want to enter an appartment number? (y or n): ");
	scanf(" %c", &b);
	if (b == 'y')
	{
		printf("Please enter the contact's appartment number: ");
		scanf(" %d", &ads[0].apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]", ads[1].postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %41s", ads[1].city);

    // Contact Numbers Input:

	char c;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &c);
	if (c == 'y'|| c == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %21s", nbs.cell);
	}

	char d;
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &d);
	if (d == 'y' || d == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %21s", nbs.home);
	}

	char e;
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &e);
	if (e == 'y' || e == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %21s", nbs.business);
	}

    // Display Contact Summary Details

	printf("\n");
	printf("Contact Details\n");
	printf("---------------\n");

	printf("Name Details\n");
	printf("First name: %s\n", nme.firstName);
	printf("Middle initial(s): %s\n", nme.middleInitial);
	printf("Last name: %s\n\n", nme.lastName);

	printf("Address Details\n");
	printf("Street number: %d\n", ads[0].streetNumber);
	printf("Street name: %s\n", ads[1].street);
	printf("Apartment: %d\n", ads[0].apartmentNumber);
	printf("Postal code: %s\n", ads[1].postalCode);
	printf("City: %s\n\n", ads[1].city);

	printf("Phone Numbers:\n");
	printf("Cell phone number: %s\n", nbs.cell);
	printf("Home phone number: %s\n", nbs.home);
	printf("Business phone number: %s\n\n", nbs.business);

    // Display Completion Message

	printf("Structure test for Name, Address, and Numbers Done!\n");

    return 0;
}

/*  SAMPLE OUTPUT:
    
Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888

Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song

Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto

Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888

Structure test for Name, Address, and Numbers Done!
*/