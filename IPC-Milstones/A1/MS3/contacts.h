/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone:  3
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

struct Contract
{
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};
