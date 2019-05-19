/*
Name: Anh-Bang Truong (Ethan)
Student number: 124753179
Email: atruong17@myseneca.ca
Workshop: week 5
Section: SSP
Date: 02/18/2018
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 2
#define SIZE 4

// Declare Struct Employee 
struct employee
{
	int id;
	int age;
	double salary;
};

/* main program */
int main(void) {

	int max = 0;
	int i = 0;
	int index = 0;
	int option = 0;
	int findID = 0;
	int tof = 0;
	double newSala = 0;
	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero
	struct employee emp[SIZE] = {{ 0 }};

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		
		switch (option) {
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");

			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 
			for (i = 0; i < max; i++)
			{
				printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
			}
			printf("\n");

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;
		case 2:	// Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly.

			if (i < SIZE && max != SIZE)
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[i].id);

				printf("Enter Employee Age: ");
				scanf("%d", &emp[i].age);

				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[i].salary);
				printf("\n");

				max += 1;
				i = max;
			}
			else if (max == SIZE)
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}

			break;

		case 3:

			printf("Update Employee Salary\n");
			printf("======================\n");
			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &findID);

				for (i = 0; i < SIZE; i++)
				{
					if (emp[i].id == findID)
					{
						printf("The current salary is %.2lf\n", emp[i].salary);
						tof = 1;
					}

				}
			}
			while (tof == 0);
			
			for (i = 0; i < SIZE; i++)
			{
				if (emp[i].id == findID)
				{
					printf("Enter Employee New Salary: ");
					scanf("%lf", &newSala);
					printf("\n");
					emp[i].salary = newSala;
				}

			}

			break;

		case 4:

			printf("Remove Employee\n");
			printf("===============\n");

			
				printf("Enter Employee ID: ");
				scanf("%d", &findID);

				for (i = 0; i < SIZE; i++)
				{
					if (emp[i].id == findID)
					{
						printf("Employee %d will be removed\n\n", findID);
						index = i;
						max -= 1;
					}

				}
				for (i = index; i < SIZE; i++)
				{
					emp[i] = emp[i + 1];
				}
			

			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0;
}






// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 113
Enter Employee Age: 53
Enter Employee Salary: 120345.78

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 114
Enter Employee Age: 25
Enter Employee Salary: 46780

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 112
The current salary is 65000.00
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   99999.99
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 112
Employee 112 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   113       53  120345.78
   114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!
*/