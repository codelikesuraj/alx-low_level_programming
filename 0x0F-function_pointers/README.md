|File|Description|
|-|-|
|[0-print_name.c](0-print_name.c)|A function that prints a name. Prototype is 'void print_name(char \*name, void (\*f)(char \*))'.|
|[1-array_iterator.c](1-array_iterator.c)|A function that executes a function given as a parameter on each element of an array. Prototype is 'void array_iterator(int \*array, size_t size, void (\*action)(int))', where 'size' is the size of the array and 'action' is a pointer to the function you need to use.|
|[2-int_index.c](2-int_index.c)|A functino that searches for an integer. Prototype is 'int int_index(int \*array, int size, int (\*cmp)(int)), where 'size' is the number of elements in the array 'array', 'cmp', is a pointer to the function to be used to compare values, 'int_index' returns the index of the first element for which the 'cmp' function does not return '0'. If no element matches or size <= 0, return '-1'.|
