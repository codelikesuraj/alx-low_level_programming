#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for stuct dog
 */
typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
