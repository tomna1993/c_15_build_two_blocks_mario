#include <stdio.h>
#include <cs50.c>

int main(void)
{	
	// Prompt user for integer number
	int height = get_int("Height: ");

	// Nested for loop;
	// iterate trough rows
	for(int i = 1; i <= height; i++)
	{
		// iterate trough columns
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
		// at the end of the row go to the next row
		printf("\n");
	}
}