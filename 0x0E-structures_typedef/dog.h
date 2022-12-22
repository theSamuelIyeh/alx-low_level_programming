#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - struct dog
 *
 * @name: string of dog name
 * @age: float age of dog
 * @owner: string of owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif