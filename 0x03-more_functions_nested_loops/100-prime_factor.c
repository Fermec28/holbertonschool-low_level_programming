#include <stdio.h>

int _isprime(int num);

int main(void)
{
	int num = 13;
	int iterator= 2;
	int aux = 1;

	printf("%d\n", next_prime(13));
}

int next_prime (int num)
{
	num++;
	return	(_isprime(num) ? num : next_prime(num));
}
int _isprime(int num)
{
	int divisor =2 ;

	if (num > 7)
	{
		while(num % divisor != 0 && divisor < num)
		{
			divisor++;
		}
		return (divisor == num? 1 : 0);
	}
	else if (num == 1 || num == 2 || num == 3 || num == 5 || num ==7)
		return (1);
	else
		return (0);
}
