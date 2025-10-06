# ft_libft

A comprehensive C standard library implementation and extension, developed as part of the 42 School curriculum. This library provides a robust collection of essential functions for string manipulation, memory management, I/O operations, linked lists, and more.

## 📋 Table of Contents

- [Description](#description)
- [Technology Stack](#technology-stack)
- [Features](#features)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Function Categories](#function-categories)
- [Testing](#testing)
- [Coding Standards](#coding-standards)
- [Contributing](#contributing)
- [License](#license)

## Description

**ft_libft** is a custom C library that reimplements standard C library functions (libc) and extends them with additional utilities. This library serves as a foundation for future 42 School projects and provides essential tools for C programming, including:

- Standard C library function reimplementations
- Extended string and memory manipulation functions
- Linked list operations
- File I/O utilities (get_next_line)
- Formatted output (ft_printf)
- Type conversion and validation functions

## Technology Stack

- **Language**: C
- **Compiler**: Clang with flags `-Wall -Wextra -Werror`
- **Standard**: C99 compliant
- **Optimization**: `-O2` flag enabled
- **Header**: `libft.h`
- **Output**: Static library (`libft.a`)

### Dependencies

- Standard C libraries:
  - `<stdlib.h>` - Memory allocation and conversion
  - `<unistd.h>` - System calls (read, write)
  - `<stdarg.h>` - Variable arguments support
  - `<limits.h>` - Integer limits

## Features

### Core Functionality

✅ **70+ Functions** organized into logical categories
✅ **Memory-safe** implementations with proper error handling
✅ **Linked list** data structure with comprehensive operations
✅ **get_next_line** for efficient file reading
✅ **ft_printf** implementation supporting multiple format specifiers
✅ **Extended string utilities** beyond standard libc
✅ **Norminette compliant** - follows 42 School coding standards

## Project Structure

```
ft_libft/
├── libft.h              # Main header file with all declarations
├── Makefile             # Build configuration
├── LICENSE              # MIT License
├── src/                 # Source files directory
│   ├── ft_*.c          # Standard and additional functions
│   ├── ft_*_bonus.c    # Bonus linked list functions
│   ├── get_next_line*.c # GNL implementation
│   └── ft_printf.c     # Printf implementation
└── .github/
    ├── workflows/       # CI/CD configuration
```

## Getting Started

### Prerequisites

- Clang compiler (or compatible C compiler)
- Unix-like operating system (Linux, macOS, WSL)

### Installation

1. **Clone the repository**:
```bash
git clone https://github.com/peda-cos/ft_libft.git
cd ft_libft
```

2. **Compile the library**:
```bash
make
```

This will create `libft.a` in the project root directory.

3. **Compile with bonus functions** (linked lists):
```bash
make bonus
```

4. **Clean object files**:
```bash
make clean
```

5. **Remove all compiled files**:
```bash
make fclean
```

6. **Recompile everything**:
```bash
make re
```

## Usage

### Include in Your Project

1. Copy `libft.a` and `libft.h` to your project directory
2. Include the header in your source files:

```c
#include "libft.h"
```

3. Compile your project with the library:

```bash
cc -Wall -Wextra -Werror your_file.c libft.a -o your_program
```

### Example Usage

```c
#include "libft.h"

int main(void)
{
    char *str;
    char **split;
    int i;

    // String manipulation
    str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);

    // String splitting
    split = ft_split("one,two,three", ',');
    i = 0;
    while (split[i])
    {
        ft_putendl_fd(split[i], 1);
        free(split[i]);
        i++;
    }
    free(split);

    // Formatted output
    ft_printf("Number: %d, Hex: %x, String: %s\n", 42, 255, "test");

    // Get next line from file
    int fd = open("file.txt", O_RDONLY);
    char *line = get_next_line(fd);
    ft_putendl_fd(line, 1);
    free(line);
    close(fd);

    return (0);
}
```

## Function Categories

### Character Validation & Conversion
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_isspace`, `ft_isxdigit`
- `ft_toupper`, `ft_tolower`

### String Manipulation
- `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strcasecmp`
- `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`
- `ft_strdup`, `ft_strndup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`
- `ft_split`, `ft_strmapi`, `ft_striteri`
- `ft_strtoupper`, `ft_strtolower`
- `ft_startswith`, `ft_endswith`

### Memory Operations
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
- `ft_memchr`, `ft_memcmp`
- `ft_calloc`, `ft_xmalloc` (with error handling)

### Conversion Functions
- `ft_atoi`, `ft_atol`, `ft_atoll`
- `ft_strtol` (with base conversion)
- `ft_itoa`

### Math Functions
- `ft_abs`, `ft_labs`, `ft_llabs`

### Output Functions
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`
- `ft_putnbr_fd`, `ft_putunbr_fd`, `ft_puthex_fd`, `ft_putptr_fd`
- `ft_printf` (supports: %c, %s, %p, %d, %i, %u, %x, %X, %%)

### Linked List Operations (Bonus)
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

### File I/O
- `get_next_line` (configurable BUFFER_SIZE, default: 1024)

## Testing

### Manual Testing

Test individual functions:

```c
#include "libft.h"
#include <assert.h>

int main(void)
{
    // Test string functions
    assert(ft_strlen("test") == 4);
    assert(ft_isdigit('5') == 1);
    assert(ft_strncmp("abc", "abd", 3) != 0);

    // Test memory functions
    char *dup = ft_strdup("duplicate");
    assert(ft_strcmp(dup, "duplicate") == 0);
    free(dup);

    return (0);
}
```

### Automated Testing

The project includes GitHub Actions workflow for automatic norminette validation:

- **Norminette Check**: Validates code against 42 School coding standards
- **Trigger**: Runs on every push and pull request

## Coding Standards

This project adheres to the **42 School Norminette** coding standards:

### Key Standards

- **Indentation**: Tabs (width: 4 spaces)
- **Line Length**: Maximum 80 characters
- **Function Length**: Maximum 25 lines
- **Parameters**: Maximum 4 parameters per function
- **Variables**: Maximum 5 variables per function
- **Comments**: Header comments in all files
- **Naming**: Snake_case for functions, lowercase for variables
- **No prohibited functions**: Only allowed libc functions used
- **Memory Management**: No memory leaks, proper free() usage
- **Error Handling**: Return NULL or -1 on error conditions

### File Structure

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 07:13:13 by peda-cos          #+#    #+#             */
/*   Updated: 2025/01/31 07:13:16 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

### Guidelines

- Follow the 42 Norminette coding standards
- Include comprehensive testing for new functions
- Update documentation and header file
- Ensure no memory leaks (test with valgrind)
- Add function prototype to `libft.h`
- Update `Makefile` with new source files
- Write clear, concise commit messages

### Code Quality

Run quality checks before submitting:

```bash
# Check norminette compliance
norminette .

# Check for memory leaks (example)
cc -g your_test.c libft.a
valgrind --leak-check=full ./a.out

# Verify compilation with strict flags
make re
```

## License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

```
MIT License

Copyright (c) 2025 Pedro Monteiro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction...
```

---

## 📚 Additional Resources

- [42 School Norminette](https://github.com/42School/norminette)
- [C Programming Standards](https://www.gnu.org/prep/standards/)
- [Library Functions Reference](https://man7.org/linux/man-pages/)

## 🤝 Acknowledgments

- **42 School** for the project specifications
- The **42 Community** for support and knowledge sharing
- All contributors who help improve this library

---

**Author**: Pedro Monteiro (peda-cos)
**School**: 42 São Paulo
**Year**: 2024-2025
