#include <stdio.h>
/**
 * main - Entry point calculate the sum of the nums multiply 3 or 5
 *
 * Return: 0 Always(Success)
 */
int main (void)
{
        int result = 0;
	int iterator;
	for(iterator = 1023; iterator > 0; iterator--)
	{
		if (iterator % 5 == 0 || iterator % 3 == 0)
			result += iterator;
	}
	printf("%d\n",result);
	return (0);
}
