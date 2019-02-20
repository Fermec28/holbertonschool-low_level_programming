#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, n;
	time_t t;

	n = 2772;
	srand((unsigned) time(&t));
	while(n > 127)
	{
		i = rand() % 128;
		printf("%c",i);
		n -= i;
	}

	printf("%c",n);
	return (0);
}
