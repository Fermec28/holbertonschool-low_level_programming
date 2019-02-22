#include "holberton.h"
/**
 * *cap_string - add format
 * @s: array to be manipulated
 * Return: array converted
 */
char *cap_string(char *s)
{
	int itetator = 0;
	while(s[itetator]){
		itetator++;
	}
	return (s);
}

int capitalize(*s, current_pos){

	if (s[current_pos]== '.')
	{
		current_pos = find_next(s,current_pos);
		if (s[current_pos]>= 'a' && s[current_pos]>= 'z')
			s[current_pos] = s[current_pos] - 'a' + 'A';
	}
	return current_pos;
}

int find_next(*s,current_pos)
{
	if (s[current_pos]>= 'a' && s[current_pos]>= 'z')
		return (current_pos);
	else if (s[current_pos]>= 'A' && s[current_pos]>= 'z')
		return (current_pos);
	else if (s[current_pos]>= '0' && s[current_pos]>= '9')
		return (current_pos);
	else
		find_next(*s,current_pos + 1);
}
