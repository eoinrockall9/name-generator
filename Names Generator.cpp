// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>


void main()
{
	char names[10][51] = { "Mandy Crawford", "Carole Manning", "Bruce Bell", "Dorothy Kelley", "Jared Saunders", "Mark Adams", "Stewart Thomas", "Phil Barber", "Willie Brown", "Rory James" };
	char firstNames[10][51] = { "" };
	char surnames[10][51] = { "" };
	char mixedNames[10][51] = { "" };
	int nameCounter = 0; // Used for stepping down through the names
	int namePos = 0; // Used for stepping down the characters in the name
	int copyPos = 0; // Used for placing character in new array

	for (nameCounter = 0; nameCounter < 10; nameCounter++)
	{
		while (namePos < 50)
		{
			if (names[nameCounter][namePos] == ' ')
			{
				namePos++;
				while (names[nameCounter][namePos] != '\0')
				{
					surnames[nameCounter][copyPos] = names[nameCounter][namePos];
					namePos++;
					copyPos++;
				}
				continue;
			}
			else
			{
				firstNames[nameCounter][namePos] = names[nameCounter][namePos];
				namePos++;
			}
		}

		namePos = 0;
		copyPos = 0;

	}
	printf("\nFirst Names:\n");
	while (namePos<10)
	{
		printf("%s\n", firstNames[namePos]);
		namePos++;
	};


	printf("\nSurnames:\n");

	while (copyPos<10)
	{
		printf("%s\n", surnames[copyPos]);
		copyPos++;
	};

	printf("\n");

	nameCounter = 0;
	namePos = 9;

	while (nameCounter<10)
	{
		strcat_s(mixedNames[nameCounter], firstNames[nameCounter]);
		strcat_s(mixedNames[nameCounter], " ");
		strcat_s(mixedNames[nameCounter], surnames[namePos]);
		nameCounter++;
		namePos--;
	}

	printf("New Names:\n");
	namePos = 0;
	while (namePos < 10)
	{
		
		printf("%s\n", mixedNames[namePos]);
		namePos++;

	}
	
}
