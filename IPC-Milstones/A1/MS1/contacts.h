/* -------------------------------------------
Name: Anh-Bang Truong (Ethan)
Student number: 124753179
Email: atruong17@myseneca.ca
Section: IPC144_SPP
Date: 04/03/2018
----------------------------------------------
Assignment: 1
Milestone:  1
---------------------------------------------- */

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
struct Address 
{
	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];
};


// Structure type Numbers declaration
struct Numbers
{
	char cell[21];
	char home[21];
	char business[21];
};

