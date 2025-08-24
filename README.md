# Libft

This project is a custom library containing a variety of standard C functions, along with some additional ones. The goal of this project is to recreate a set of C library functions to understand their underlying principles and to build a foundational library for future projects.

---

## What's in this library?

The **libft** library includes a collection of functions that are commonly found in the standard C library (`<string.h>`, `<stdlib.h>`, `<ctype.h>`, etc.). All functions are prefixed with `ft_` to avoid conflicts with the original library functions.

The project is structured into three main parts:

### Part 1: Mandatory Functions

This section contains recreations of essential C library functions. The following functions are included:

- **Character Classification:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **Memory & String Manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`, `ft_strdup`
- **Memory Allocation:** `ft_calloc`

### Part 2: Additional Functions

This part consists of functions that are not part of the standard C library but are very useful for the rest of the 42 curriculum.

- **String Manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`
