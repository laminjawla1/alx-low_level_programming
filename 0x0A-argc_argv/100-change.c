#include <stdio.h>
#include <stdlib.h>

int twenty_five(int cent);
int ten(int cent);
int five(int cent);
int two(int cent);

/**
*main - calulates how many coins must be give from a cent
*@argc: Argument Count
*@argv: Argument Vector
*Return: (0)
*/
int main(int argc, char *argv[])
{
	int cent, coins, total = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (10);
	}
	cent = atoi(argv[1]);

	coins = twenty_five(cent);
	cent = cent - coins * 25;
	total += coins;

	coins = ten(cent);
	cent = cent - coins * 10;
	total += coins;

	coins = five(cent);
	cent = cent - coins * 10;
	total += coins;

	coins = two(cent);
	cent = cent - coins * 10;
	total += coins;

	coins = 0;
	while (cent >= 1)
	{
		cent -= 1;
		coins++;
	}

	cent = cent - coins * 1;
	total += coins;

	printf("%d\n", total);
	return (0);
}
/**
*twenty_five - get how many 25s are in the cent
*@cent: Cent
*Return: Number of 25s
*/
int twenty_five(int cent)
{
	int coins = 0;

	while (cent >= 25)
	{
		cent -= 25;
		coins++;
	}
	return (coins);
}
/**
*ten - get how many 10s are in the cent
*@cent: Cent
*Return: Number of 10s in cent
*/
int ten(int cent)
{
	int coins = 0;

	while (cent >= 10)
	{
		cent -= 10;
		coins++;
	}
	return (coins);
}
/**
*five - get how many 5s there in the cent
*@cent: Cent
*Return: Number of 5s
*/
int five(int cent)
{
	int coins = 0;

	while (cent >= 5)
	{
		cent -= 5;
		coins++;
	}
	return (coins);
}
/**
*two - get how many 2s are in the cent
*@cent: Cent
*Return: Number of 2s therein
*/
int two(int cent)
{
	int coins = 0;

	while (cent >= 2)
	{
		cent -= 2;
		coins++;
	}
	return (coins);
}
