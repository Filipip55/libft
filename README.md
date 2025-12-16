*This project has been created as part of the 42 curriculum by icoman.*

# Libft - My First C Library

## Description
**Libft** is the first project of the 42 curriculum. Its purpose is to create a custom C library named `libft.a`. This library serves as a foundation for future projects, allowing students to understand the inner workings of standard C library functions.

This project prohibits the use of standard libraries (except for specific authorized cases), forcing a reliance on low-level logic.

## Content of the Library

The library includes a wide range of functions, categorized below:

### 1. Libc Functions
My implementation of standard C library functions.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0 through 9). |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks whether c fits into the ASCII character set. |
| `ft_isprint` | Checks for any printable character. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills memory with a constant byte. |
| `ft_bzero` | Zeroes a byte string. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies memory area (handles overlap). |
| `ft_strlcpy` | Copies string to a specific size. |
| `ft_strlcat` | Concatenates string to a specific size. |
| `ft_toupper` | Converts char to uppercase. |
| `ft_tolower` | Converts char to lowercase. |
| `ft_strchr` | Locates character in string. |
| `ft_strrchr` | Locates character in string (from the end). |
| `ft_strncmp` | Compares two strings. |
| `ft_memchr` | Scans memory for a character. |
| `ft_memcmp` | Compares memory areas. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and sets its bytes' values to 0. |
| `ft_strdup` | Creates a duplicate for the string passed as parameter. |

### 2. Additional Functions
Functions that are not part of the standard libc but are useful.

| Function | Description |
| :--- | :--- |
| `ft_substr` | Returns a substring from a string. |
| `ft_strjoin` | Concatenates two strings. |
| `ft_strtrim` | Trims the beginning and end of string with specific set of chars. |
| `ft_split` | Splits a string using a char as parameter. |
| `ft_itoa` | Converts a number into a string. |
| `ft_strmapi` | Applies a function to each character of a string. |
| `ft_striteri` | Applies a function to each character of a string (by reference). |
| `ft_putchar_fd` | Outputs a char to a file descriptor. |
| `ft_putstr_fd` | Outputs a string to a file descriptor. |
| `ft_putendl_fd` | Outputs a string to a file descriptor, followed by a newline. |
| `ft_putnbr_fd` | Outputs a number to a file descriptor. |

### 3. Functions for Linked Lists
Functions to manipulate lists (`t_list` struct).

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new list element. |
| `ft_lstadd_front` | Adds an element at the beginning of a list. |
| `ft_lstsize` | Counts the number of elements in a list. |
| `ft_lstlast` | Returns the last element of the list. |
| `ft_lstadd_back` | Adds an element at the end of a list. |
| `ft_lstdelone` | Deletes and frees one element from the list. |
| `ft_lstclear` | Deletes and frees the list. |
| `ft_lstiter` | Applies a function to each element of the list. |
| `ft_lstmap` | Applies a function to each element of the list, creating a new list. |

---

## Instructions

### Requirements
* `gcc` compiler
* `make` (GNU Make)

### Installation
To compile the library, clone the repository and run the Makefile:

cd libft
make

This will generate the libft.a static library file.
Commands

    make : Compiles the mandatory functions and creates libft.a.

    make clean : Removes object files (.o).

    make fclean : Removes object files and the libft.a binary.

    make re : Performs a full rebuild (fclean + make).

### Resources
Man pages: The primary source of truth for standard functions
Geeks for geeks: https://www.geeksforgeeks.org/c/linked-list-in-c/
AI was used mostly for test case suggestions (edge cases) and for explainig logic and concepts when i was bedridden for a week