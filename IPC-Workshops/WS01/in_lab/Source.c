#include <stdio.h>
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

int main()
{
	struct Name nme = { 0 };
	struct Address ads = { 0 };
	struct Numbers nbs = { 0 };
	printf("Please enter the contact's first name: ");
	scanf("%s", &nme.firstName);

	char a = 0;
	printf("Do you want to enter a middile initial(s)? (y or n): ");
	scanf("%c", &a);
	if (a == 'y')
	{
		printf("Please enter the contact's middle intitial(s): ");
		scanf("%s", &nme.middleInitial);
	}
	return 0;
}