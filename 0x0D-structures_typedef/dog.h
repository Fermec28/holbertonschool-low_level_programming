#ifndef SCOPE
#define SCOPE
/**
 * struct dog - Dog
 * @name: pointer to name
 * @age: age of Dog
 * @owner: Third me
 *
 * Description: Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif