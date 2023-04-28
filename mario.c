#include <stdio.h>
#include <cs50.c>

int main(void)
{
	int height = get_int("Height: ");

	for(int i = 1; i <= height; i++)
	{
		int j = 0;
		
		while (j < (height - i))
		{
			printf(" ");
			j++;
		} 

		do
		{
			printf("#");
			j++;

		} while (j < height);
		
		printf("\n");
	}
}