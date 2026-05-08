*This activity has been created as part of the 42 curriculum by gerramir.*

# Libft

## 📚 Description

Libft is a custom C library built as part of the 42 curriculum. The goal is to
reimplement a selection of standard C library functions from scratch, gaining a
deep understanding of memory management, pointers, and string manipulation in C.
This library serves as a foundation for all future 42 projects.

### Library contents

**Part 1 – Libc reimplementations**
Standard functions reimplemented with the `ft_` prefix, behaving identically to
their libc counterparts: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`,
`ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_strlen`, `ft_memset`, `ft_bzero`,
`ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strlcpy`, `ft_strlcat`,
`ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`,
`ft_strdup`.

**Part 2 – Additional functions**
Functions not present in libc or reimplemented in a different form:
`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`,
`ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

**Part 3 – Linked list utilities**
Functions to manipulate a singly linked list using the `t_list` structure:
`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## ⚙️ Instructions

### Compilation

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # full rebuild
```

To use the library in your project, include the header and link the archive:

```bash
cc your_file.c -L. -lft -I. -o your_program
```

---

## 📦 Resources

### Documentation
- `man` pages: `string.h`, `stdlib.h`, `unistd.h`
- https://cplusplus.com/reference/clibrary/
- https://www.gnu.org/software/libc/manual/
- YouTube: Oceano (42 explanations)

### AI Usage
AI was used for:
- understanding project requirements
- reviewing README structure and compliance
- improving documentation clarity and formatting
- verifying completeness of mandatory sections

AI was not used to generate or write the final C code.