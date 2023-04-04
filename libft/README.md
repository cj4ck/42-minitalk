# Libft
#💾/42/Core_Curriculum/libft 
#📝/Computer_Science/Programming/C

# General concepts of the project
- Goal of this project was to program my very first library containing my own implementations of functions from standard C libraries. I have gained better understanding of how all of it works. It was also my first encouter with Makefiles and headerfiles. This was my first project in 42Core_Curriculum.
- »  [[C Makefiles]]
- »  [[C Header Files]]

## List of Functions:
### Functions from `ctype.h`
- `ft_isalpha` - checks for an alphabetic character.
- `ft_isdigit` - check for a digit (0 through 9).
- `ft_isalnum` - checks for an alphanumeric character.
- `ft_isascii` - checks whether c fits into the ASCII character set.
- `ft_isprint` - checks for any printable character.
- `ft_toupper` - convert char to uppercase.
- `ft_tolower` - convert char to lowercase.

### Functions from `string.h`
- `ft_strlen` - calculate the length of a string.
- `ft_memset` - fill memory with a constant byte.
- `ft_bzero` - erases the data in the n bytes of the memory.
- `ft_memcpy` - copy a memory block from one location to another.
- `ft_memmove` - copy a memory block from one location to another using a buffer.
- `ft_strlcpy` - copy string to a specific size.
- `ft_strlcat` - appends the NUL-terminated string `src` to the end of `dst`.
- `ft_strchr` - function searches for the FIRST occurrence of character `c` in string `s`.
- `ft_strrchr` - function searches for the LAST occurrence of character `c` in string `s`.
- `ft_strncmp` - compares strings to see if one of them is greater, less or equal.
- `ft_memchr` - Function returns a pointer to the first occurrence of the character `c` within the first `n` characters of the object pointed to by `s`.
- `ft_memcmp` - returns a negative, zero, or positive integer depending on whether the first `n` characters of the object pointed to by `s1` are less than, equal to, or greater than the first `n` characters of the object pointed to by `s2`.
- `ft_strnstr` - locate a substring in a string.
- `ft_strdup` - creates a duplicate for the string passed as a parameter.

### Functions from `stdlib.h`
- `ft_atoi` - convert a string to an integer.
- `ft_calloc` - allocates memory and sets its bytes' values to 0.

### Non-standard functions
- `ft_substr` - returns a substring from a string.
- `ft_strjoin` - concatenates two strings.
- `ft_strtrim` - trims the beginning and end of a string with a specific set of chars.
- `ft_split` - splits a string using a char as parameter.
- `ft_itoa` - converts a number into a string.
- `ft_strmapi` - applies a function to each character of a string.
- `ft_striteri` - applies a function to each character of a string.
- `ft_putchar_fd` - output a char to a file descriptor.
- `ft_putstr_fd` - output a string to a file descriptor.
- `ft_putendl_fd` - output a string to a file descriptor, followed by a new line.
- `ft_putnbr_fd` - output a number to a file descriptor.

### ⭐ Bonus part - [[ Linked list in C| Linked list ]] functions
- `ft_lstnew` - creates a new list element.
- `ft_lstadd_front` - adds an element at the beginning of a list.
- `ft_lstsize` - counts the number of elements in a list.
- `ft_lstlast` - returns the last element of the list.
- `ft_lstadd_back` - adds an element at the end of a list.
- `ft_lstclear`  - deletes and free list.
- `ft_lstiter` - applies a function to each element of a list.
- `ft_lstmap` - applies a function to each element of a list. 

