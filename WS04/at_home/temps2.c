//--------------------------------------------------
// Name: Anh-Bang Truong (Ethan)           
// Student Number: 124753179
// Email: atruong17@myseneca.ca          
// Section: IPC144_SSP       
// Workshop: week 4      
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");


	int days = 0;
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);
	printf("\n");


	while (days < 3 || days > 10)
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
		printf("\n");
	}


	int i = 0;
	int highTemp = 0, lowTemp = 0;
	int totalHi = 0, totalLow = 0;
	int high[10] = { 0 }, low[10] = { 0 };
	double average[10] = { 0 };
	int highest = 0, lowest = 0;
	int hiDay = 0, lowDay = 0;


	for (i = 0; i < days; i++)
	{
		printf("Day %d - High: ", i + 1);
		scanf("%d", &highTemp);
		high[i] = highTemp;

		printf("Day %d - Low: ", i + 1);
		scanf("%d", &lowTemp);
		low[i] = lowTemp;

		if (highTemp > highest)
		{
			highest = highTemp;
			hiDay = i + 1;
		}

		if (lowTemp < lowest)
		{
			lowest = lowTemp;
			lowDay = i + 1;
		}
		
		totalHi += highTemp;
		totalLow += lowTemp;
		average[i] = ((double)totalHi + (double)totalLow) / ((i + 1) * 2);
	}


	printf("\n");
	printf("Day  Hi  Low\n");


	for (i = 0; i < days; i++)
	{
		printf("%d    %d    %d", i + 1, high[i], low[i]);
		printf("\n");

	}
	
	printf("\n");
	printf("The highest temperature was %d, on day %d\n", highest, hiDay);
	printf("The lowest temperature was %d, on day %d\n\n", lowest, lowDay);


	int stop = 0;

	for (i = 0 ;i < 5 && stop == 0; i++)
	{
		printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &i);
		printf("\n");

		if (i == -1)
			stop = 1; 
		else 
		{

			while (i < 1 || i > 4)
			{
				printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
				scanf("%d", &i);
				printf("\n");
			}
			printf("The average temperature to day %d is: %.2lf\n\n", i, average[i - 1]);

		}
		
	}

	printf("Goodbye\n");
	
	return 0;
}