#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this stucture stores a dog's information
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 *
 * Description: This struct will create variable that will store any kind of dog's info
 */

struct dog 
{
	char *name;
	char *owner;
	float age;

};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif
