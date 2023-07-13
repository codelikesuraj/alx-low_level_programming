|Script|Description|
|-|-|
|[0-preprocessor](0-preprocessor)|Runs a C file throught the preprocessor and saves the result into another file. The C file name is saved in the variable '$CFILE'. The output is saved in the file 'c'.|
|[1-compiler](1-compiler)|Compiles a C file but does not link. The C file name is saved in the variable '$CFILE'. the output file should be named the same as the C file, but with the extension '.o' instead of '.c'.|
|[2-assembler](2-assembler)|Generates the assembly code of a C code and save it in an output file. The C file name is saved in the variable '$CFILE'. The output file is named the same as the C file, but with the extension '.s' instead of '.s'.|
|[3-name](3-name)|Compiles a C file and creates an executable named 'cisfun'.|
|[4-puts.c](4-puts.c)|A C program that prints exactly '"Programming is like building a multilingual puzzle', followed by a new line. Uses the function 'puts' ('printf' is not allowed) and the program ends with the value '0'.|
|[5-printf.c](5-printf.c)|A C program that prints exctly 'with proper grammar, but the outcome is a piece of art,', followed by a new line. Uses the function 'printf' ('puts' is not allowed) and the program returns '0'. It compiles without warning when using '-Wall gcc' option.|
|[6-size.c](6-size.c)|A C program that prints the size of various types on the computer it is compiled and run on. The program returns 0 and uses the package 'libc6-dev-i38c' which is used as the '-m32' gcc option.|
