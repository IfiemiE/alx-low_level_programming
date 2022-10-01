#include <stdio.h>
#include <stdlib.h>

/**
  * main - calculates minimum coins to
  * add up to a given number
  * @argc: number of command line argument
  * @argv: list of command line argument
  * Return: 0 if program is successful,
  * and 1, if there is error
  */
int main(int argc, char **argv)
{
	int i, rem, num, cash;
	int sum = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			num = cash / coins[i];
			sum += num;
			rem = cash % coins[i];
			cash = rem;
			if (cash == 0)
				break;
		}
		printf("%d\n", sum);
	}
	return (0);
}
