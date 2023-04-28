#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int height; 
	
	do
	{
		height = get_int("Height: ");
	} while (height < 1 || height > 15);

	for(int i = 1; i <= height; i++)
	{
		for(int j = 0; j < height; j++)
		{
			if(j < height - i)
			{
				printf(" ");
			}
			else
			{
				printf("#");
			}
		}

		printf("\n");
	}
}