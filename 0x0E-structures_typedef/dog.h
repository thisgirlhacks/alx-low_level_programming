/**
  * struct dog - A dog's basic info
  * @name : Name of Dog
  * @age : Age of Dog
  * @owner : Owner of dog
  */
struct Dog
{
	char * name;
	float age;
	char * owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);

