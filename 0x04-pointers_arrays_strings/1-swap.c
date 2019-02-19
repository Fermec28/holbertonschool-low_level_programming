/**
 * swap_int - swap number
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
