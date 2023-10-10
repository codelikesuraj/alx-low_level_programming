|File|Description|
|-|-|
|[0-malloc_checked.c](0-malloc_checked.c)|A function that allocates memory using 'malloc'. Prototype is 'void \*malloc_checked(unsigned int b)'. Returns a pointer to the allocated memory. If malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.|
|[1-string_nconcat.c](1-string_nconcat.c)|A function that concatenates two strings. Prototype 'char \*string_nconcat(char \*s1, char \*s2, unsigned int n)'. The returned pointer shall point to a newly allocated space in memory, which contains s2, followed by the first n bytes of s2, and null terminated. If the function fails, it should return NULL. If n is greater or equal to the length of s2, the use the entire string s2. If NULL is passed, treat is as an empty string.|
|[2-calloc.c](2-calloc.c)|A function that allocates memory for an array, using malloc. Prototype is 'void \*\_calloc(unsigned int nmemb, unsigned int size)'. The \_calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size if 0, then \_calloc returns NULL. If malloc fails, then \_calloc returns NULL.|
|[3-array_range.c](3-array_range.c)|A function that creates an array of integers. Prototype is 'int \*array_range(int min, int max)'. The array created should contain all the values from min (included) to max (included), ordered from min to max. If min > max or malloc fails return NULL, else, return the pointer to the newly created array.|