#ifndef DOG_H
#define DOG_H

#define typedef
#define STRUCT_DOG

/**
 * struct dog - entry point
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef STRUCT_DOG

#endif /*DOG_H*/
