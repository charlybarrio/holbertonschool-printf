# Proyecto _printf  

### Description
_printf is a standard C function that prints format strings to the screen.

Our _printf is in charge of emulating some of the most important functions of this one, it receives as initial variable a string of characters, checks one by one each character received and prints it, in the case of finding a format specifiers, it receives what type of data it contains and prints the content of the variable.

In the case of receiving an undeclared format specifiers, e.g. %T, it prints it as it is


### Format Specifiers 
A character that specifies the type of conversion to be applied.      
The format specifiers and their meanings are.

| Type | Function |
| --- | --- |
| %c | Print ARGUMENT of character type |
| %s | Print ARGUMENT of string type |
| %% | Prints a single % |
| %d | Print ARGUMENT of decimal type |
| %i | Print ARGUMENT of type integer |

### Requirements
Allowed editors: vi, vim, emacs.

All your files should end with a new line.

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

You are not allowed to use global variables.

No more than 5 functions per file.


### Files that make up our _printf
- **\_printf.c** Contains the main _printf function that provides the standard output according to the format specifier.
- **\_putchar.c** Contains function _putchar which prints a character to stdout.
- **aux_function.c** It contains various functions that correspond to the format specifier destinations.
- **select_function.c** Selects, depending on the format specifiers received, which function will be executed for printing.
- **main.h:** Header file that contains all the function prototypes used in _printf.
- **man_3_printf:** ``printf`` manual. 




### Flowcharts
![Diagrama](https://user-images.githubusercontent.com/44532670/201565160-a8cb88d1-4035-46e8-98d8-fcad63a42c75.jpg)


