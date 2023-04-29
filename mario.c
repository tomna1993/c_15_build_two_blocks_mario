#include <stdio.h>
#include <cs50.c>

int main(void)
{	
	// Prompt user for integer number
	int height; 
	
	do
	{
		height = get_int("Height: ");
	} while (height < 1 || height > 15);

	// Nested for loop;
	// iterate trough rows
	for(int i = 1; i <= height; i++)
	{
		// iterate trough columns in first block
		for(int j = 0; j < height; j++)
		{
			// print " " characters; if we subtract i from height we get the number of "#" in a row
			if(j < height - i)
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}

		// Put two space between blocks
		printf("  ");

		// iterate trough columns in second block
		for(int j = 0; j < i; j++)
		{
			// print "#" characters;
			printf("#");
		}

		// at the end of the row go to the next row
		printf("\n");
	}
}