#include <stdio.h>
void myfun(void)
{
	int a;
	int b;

	a = 4;
	b = 5;
	printf("%d\n", a + b);
}

int main(void)
{
	void (*f)() = myfun;
	int i = 0;

	while ( *((char*)f + i))
	{
		printf("%ud ", *((char*)f + i));
		i++;
	}
	printf("\n");
	return (0);
}
