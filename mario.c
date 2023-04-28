#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int height = get_int("Height: ");

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