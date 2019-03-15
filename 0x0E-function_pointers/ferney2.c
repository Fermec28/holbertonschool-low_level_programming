#include <stdio.h>
int main(void)
{
	int (*f)() = main;
	char i = 0;

	while ( *((char*)f + i))
	{
		printf("%x ",*((char*)f + i) & 0xff);
		i++;
	}
	printf("\n");
	return (0);
}
