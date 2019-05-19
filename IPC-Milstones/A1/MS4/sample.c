#include <stdio.h>

struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

void getName(struct Name *);

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

int main(void)
{
	struct Contact contact;

	// Call the Contact function getName to store the values for the Name member
	getName(&contact.name);

	printf("Name Details\n");
	printf("First name: %s\n", contact.name.firstName);
	printf("Middle initial(s): %s\n", contact.name.middleInitial);
	printf("Last name: %s\n\n", contact.name.lastName);

	return 0;

}