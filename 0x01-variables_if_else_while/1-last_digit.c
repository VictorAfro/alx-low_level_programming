#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the last digit of a randomly generated number
 *
 * Return: 0.
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n);
	num = n % 10;
	if (x > 5)
	{
		printf("and is greater than 5\n", num);
	}
	else if ((num < 0) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
