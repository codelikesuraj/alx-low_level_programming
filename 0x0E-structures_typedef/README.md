|File|Description|
|-|-|
|[dog-h](dog.h)|A new type 'struct dog' with the following elements: 'name' of type 'char \*', 'age' of type 'float' & 'owner' of type 'char \*'.|
|[1-init_dog.c](1-init_dog.c)|A function that initializes a variable of type 'struct dog'. Prototype is 'void init_dog(struct dog \*d, char \*name, float age, char \*owner)'.|
|[2-print_dog.c](2-print_dog.c)|A function that prints a 'struct dog'. Prototype is 'void print_dog(struct dog \*d). If an element of 'd' is NULL, print (nil) instead of the element, i.e if name is NULL, print Name: (nil)). If d is NULL print nothing.|
|[4-new_dog.c](4-new_dog.c)|A function that creates a new dog. Prototype is 'dog_t \*new_dog(char \*name, float age, char \*owner)'. Return NULL if functiom fails.|
|[5-free_dog.c](5-free_dog.c)|A function that frees dogs. Prototype is 'void free_dog(dog_t \*d)'.|
