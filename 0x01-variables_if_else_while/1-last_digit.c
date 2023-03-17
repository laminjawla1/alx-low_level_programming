#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generate a random number
 * Return: 0 (success)
*/
int main(void)
{
	int n, last_digit_of_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_digit_of_n = n % 10;

    if (last_digit_of_n > 5)
        printf(
                "Last digit of %d is %d and is greater than %d\n", 
                n, last_digit_of_n, 5);
    else if (last_digit_of_n < 6 && last_digit_of_n != 0)
        printf(
                "Last digit of %d is %d and is less than %d and not %d\n", 
                n, last_digit_of_n, 6, 0);
	else
        printf(
                "Last digit of %d is %d and %d\n", n, last_digit_of_n, 0);

    return (0);
}