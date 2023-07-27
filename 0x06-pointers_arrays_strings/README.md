|File|Description|
|-|-|
|[0-strcat.c](0-strcat.c)|A function that concatenates two strings. Prototype is 'char \*\_strcat(char \*dest, char \*src)'. It appends the 'src' string to the 'dest' string, overwriting the terminating null byte '\\0' at the end of 'dest', and then adds a terminating null byte. Returns a pointer to the resulting string 'dest'. Hint: 'strcat'.|
|[1-strncat.c](1-strncat.c)|A function that concatenates two strings. Prototype is 'char \*\_strncat(char \*dest, char \*src, int n)'. This function is similar to the [0-strcat.c]('_strcat') function, except that it will use at most 'n' bytes from 'src'; and 'src' does not need to be null-terminated if it contains 'n' or more bytes. Return a pointer to the resulting string 'dest'. Hint: 'strncat'.|
|[2-strncpy.c](2-strncpy.c)|A function that copies a string. Prototype is 'char \*\_strncpy(char \*dest, char \*src, int n)'. It should work exactly like C's builtin 'strncpy' function.|
|[3-strcmp.c](3-strcmp.c)|A function that compares two strings. Prototype is 'int \_strcmp(char \*s1, char \*s2)'. It should work exactly like C's builtin 'strcmp' function.|
|[4-rev_array.c](4-rev_array.c)|A function that reverses the content of an array of integers. Prototype is 'void reverse_array(int \*a, int n)', where n is the number of elements of the array.|
|[5-string_toupper.c](5-string_toupper.c)|A function that changes all lowercase letters of a string to uppercase. Prototype is 'char \*string_toupper(char \*str)'.|
|[6-cap_string.c](6-cap_string.c)|A function that capitalizes all words of a string. Prototype is 'char \*cap_string(char \*str)'. Separators of words: space, tabulation, new line, ',', ';', '.', '!', '?', '"', '(', ')', '{', and '}'.|
|[7-leet.c](7-leet.c)|A function that encodes a string into '1337'. Letters 'a' & 'A' should be replaced by '4', 'e' & 'E' by '3', 'o' & 'O' by '0', 't' & 'T' by '7', & 'l' & 'L' by '1'. Prototype is 'char \*leet(char \*)'. 'If' should only be used once in the code, 'switch' and ternary operations are not allowed.|
|-|-|
|[100-rot13.c](100-rot13.c)|A function that encodes a string using 'rot13'. Protottype is 'char \*rot13(char \*str)'. 'If' should only be used once in the code. Only two loops can be used in the code. 'Switch' and ternary operations are not allowed.|
|[101-print_number.c](101-print_number.c)|A function that prints an integer. Prototype is 'void print_number(int n)'. '\_putchar' can only be used once. 'long' can not be used and so is 'arrays' or 'pointers'. Hard-coding special values are not allowed also.|
