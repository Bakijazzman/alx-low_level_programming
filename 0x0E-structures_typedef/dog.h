#ifndef _DOG_H
#define _DOG_H
/**
 * strect dog - structure or object
 * @name: name of the dog
 * @age: age of tyhe dog
 * @owner: owner of the dog
 */
	struct dog
	{
		char * name;
		float age;
		char *owner;
	};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
