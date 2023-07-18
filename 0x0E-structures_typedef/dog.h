#ifndef DOG_H
#define DOG_H

/**
 * struct dog - detail of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of the dog's name
 *
 * Description: this task a structure that
 * contains the details of a dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
