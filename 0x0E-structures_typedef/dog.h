#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic information
 * @name: First member, the name of the dog
 * @age: Second member, the age of the dog
 * @owner: Third member, the name of the dog's owner
 *
 * Description: This struct contains basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog.
 * @name: Pointer to name of dog.
 * @age: Age of dog.
 * @owner: Pointer to owner's name.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to struct dog.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new struct dog.
 * @name: Pointer to name of dog.
 * @age: Age of dog.
 * @owner: Pointer to owner's name.
 *
 * Return: Pointer to struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees a struct dog.
 * @d: Pointer to struct dog.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: Pointer to destination of string.
 * @src: Pointer to source of string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s);

#endif
