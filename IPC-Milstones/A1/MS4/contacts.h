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

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
struct Address
{
	int streetNumber;
	char street[41];
	int apartmentNumber;
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

// declare after other structs (b/c u need the other struct to exist first)

struct Contact
{
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};


void getName(struct Name *);
void getAddress(struct Address *);
void getNumbers(struct Numbers *);
