# 📚 libft - Your Custom C Library

A comprehensive C library that reimplements many standard C library functions along with additional useful utilities. This library serves as a foundation for C projects by providing essential string manipulation, memory management, linked list operations, and more.

## 📋 Table of Contents

- [📚 libft - Your Custom C Library](#-libft---your-custom-c-library)
	- [📋 Table of Contents](#-table-of-contents)
	- [🔎 Overview](#-overview)
	- [✨ Features](#-features)
	- [🚀 Installation](#-installation)
	- [🔧 Usage](#-usage)
		- [Example Usage](#example-usage)
	- [📝 Available Functions](#-available-functions)
		- [Libc Functions](#libc-functions)
		- [Memory Functions](#memory-functions)
		- [Additional Functions](#additional-functions)
	- [🌟 Bonus Functions](#-bonus-functions)
		- [Linked List Operations](#linked-list-operations)
	- [🔧 Special Features](#-special-features)
		- [Get Next Line](#get-next-line)
		- [ft\_printf](#ft_printf)
	- [🛠️ Makefile Commands](#️-makefile-commands)

## 🔎 Overview

The `libft` library contains a collection of carefully implemented C functions that mirror the behavior of the standard C library functions, along with additional utilities to make your C programming experience smoother. This project is perfect for C developers who want a reliable, well-tested set of functions for their projects.

## ✨ Features

- **Libc Functions**: Reimplementations of standard C library functions
- **Memory Management**: Functions for memory allocation and manipulation
- **String Operations**: Comprehensive set of string handling functions
- **Character Checks**: Character classification and conversion functions
- **Linked List Utilities**: Complete suite of linked list functions
- **File Descriptor Operations**: Functions for writing to file descriptors
- **Get Next Line**: Function for reading files line by line
- **Printf**: Custom implementation of printf function

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```

2. Compile the library:
   ```bash
   make
   ```

3. For the bonus functions (linked list operations):
   ```bash
   make bonus
   ```

## 🔧 Usage

To use the library in your C projects:

1. Include the header file in your code:
   ```c
   #include "libft.h"
   ```

2. Compile your program with the library:
   ```bash
   cc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
   ```

3. Run your program:
   ```bash
   ./your_program
   ```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    char *upper = ft_strdup(str);

    ft_strtoupper(upper);
    ft_printf("Original: %s\nUppercase: %s\n", str, upper);

    free(upper);
    return (0);
}
```

## 📝 Available Functions

### Libc Functions
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_isspace`, `ft_isxdigit`
- Character conversion: `ft_toupper`, `ft_tolower`
- String operations: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strcasecmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`
- Memory operations: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Conversion: `ft_atoi`, `ft_atol`, `ft_atoll`, `ft_strtol`
- Math: `ft_abs`, `ft_labs`, `ft_llabs`

### Memory Functions
- `ft_calloc`: Allocates memory and initializes it to zero
- `ft_strdup`: Duplicates a string
- `ft_strndup`: Duplicates a string up to n characters
- `ft_xmalloc`: Safe memory allocation

### Additional Functions
- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- String transformations: `ft_strtoupper`, `ft_strtolower`
- String checks: `ft_startswith`, `ft_endswith`
- File descriptor operations: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`, `ft_puthex_fd`, `ft_putptr_fd`, `ft_putunbr_fd`

## 🌟 Bonus Functions

### Linked List Operations
- Creation and deletion: `ft_lstnew`, `ft_lstdelone`, `ft_lstclear`
- Addition: `ft_lstadd_front`, `ft_lstadd_back`
- Traversal: `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`

## 🔧 Special Features

### Get Next Line
```c
char *get_next_line(int fd);
```
Reads a line from a file descriptor. This function is perfect for reading files line by line.

### ft_printf
```c
int ft_printf(const char *format, ...);
```
A custom implementation of the printf function supporting various format specifiers.

## 🛠️ Makefile Commands

- `make`: Compiles the library
- `make bonus`: Adds bonus functions (linked list utilities) to the library
- `make clean`: Removes object files
- `make fclean`: Removes object files and the library
- `make re`: Rebuilds the library from scratc

---

Made with ❤️ by peda-cos
