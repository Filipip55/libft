*This project has been created as part of the 42 curriculum by <icoman>.*

# Libft - Your First C Library

## Description
**Libft** is the first project of the 42 curriculum. Its purpose is to create a custom C library named `libft.a`. This library serves as a foundation for future projects, allowing students to understand the inner workings of standard C library functions.

This project prohibits the use of standard libraries (except for specific authorized cases), forcing a reliance on low-level logic.

## Instructions

### Requirements
* `gcc` compiler
* `make` (GNU Make)

### Installation
To compile the library, clone the repository and run the Makefile:

```bash
git clone <URL_DELLA_TUA_REPO> libft
cd libft
make

This will generate the libft.a static library file.
Commands

    make : Compiles the mandatory functions and creates libft.a.

    make bonus : Compiles the mandatory + bonus (linked list) functions.

    make clean : Removes object files (.o).

    make fclean : Removes object files and the libft.a binary.

    make re : Performs a full rebuild (fclean + make).