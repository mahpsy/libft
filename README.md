*This project has been created as part of the 42 curriculum by mahebrah.*

# Libft

## Description

The aim of Libft is to create our own library of functions that we can reuse in future projects.
This project helps us understand the fundamentals of C programming while building a collection of reusable functions.
Instead of rewriting the same code in every project, we can simply call these functions from our library, making our code shorter and easier to maintain.
The library contains 43 functions, ranging from recreations of standard C library functions to more advanced functions for manipulating linked lists.

## Instructions

### building the library 

To build the library, run any of the following commands:
```bash
make
make all
make libft.a
```
### cleaning the library

To remove the object files (.o), run:
```bash
make clean
```
To remove both object files and the compiled library (`libft.a`), run:
```bash
make fclean
```
To remove and recompile everything, run:
```bash
make re
```

### using libft in your own projects

To use the functions from Libft in another C project, include the `libft.h` header file at the top of your source file.
**If `libft.h` is in the same directory as your source file**
```c
#include "libft.h"
```
**Otherwise, specify the path to the header file. For example, if it is inside a folder named `libft`:**
```c
#include "libft/libft.h"
```

 After building the library, compile your project and link it with `path/to/libft.a`. For example, if Libft is inside a `libft` folder:

```bash
cc main.c libft/libft.a -o program
```

## Library Details

Libft contains 43 functions divided into three parts:


### Part 1
**23 standard C library functions.**

> `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii`
> `ft_isprint` `ft_strlen` `ft_memset` `ft_bzero`
> `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat`
> `ft_toupper` `ft_tolower` `ft_strchr` `ft_strrchr`
> `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr`
> `ft_atoi` `ft_calloc` `ft_strdup`

For more information about these functions, run
`man <function_name>` in your terminal.

### Part 2 - Additional utility functions
**This part contains 11 additional functions that are not part of the standard libc. They provide utilities for string manipulation, memory allocation, conversions, and writing to file descriptors.**

#### ft_substr

```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

Allocates memory and creates a substring from `s`, starting at the given index and copying at most `len` characters.

**Parameters:**

• `s`: The original string..
• `start`: The starting index..
• `len`: The maximum length of the substring..

**Returns:** A pointer to the newly allocated substring, or `NULL` if allocation fails.

#### ft_strjoin

```c
char *ft_strjoin(char const *s1, char const *s2);
```

Allocates memory and joins two strings into a new string.

**Parameters:**

• `s1`: The first string..
• `s2`: The second string..

**Returns:** A pointer to the newly allocated string, or `NULL` if allocation fails.

#### ft_strtrim

```c
char *ft_strtrim(char const *s1, char const *set);
```

Creates a new string by removing all characters found in `set` from the beginning and end of `s1`.

**Parameters:**

• `s1`: The string to trim..
• `set`: The characters to remove..

**Returns:** The newly allocated trimmed string, or `NULL` if allocation fails.

#### ft_split

```c
char **ft_split(char const *s, char c);
```

Splits a string into an array of strings using a specified character as a delimiter.

**Parameters:**

• `s`: The string to split..
• `c`: The delimiter character..

**Returns:** A newly allocated NULL-terminated array of strings, or `NULL` if allocation fails.

#### ft_itoa

```c
char *ft_itoa(int n);
```

Converts an integer into its string representation.

**Parameters:**

• `n`: The integer to convert..

**Returns:** The newly allocated string representing the integer, or `NULL` if allocation fails.

#### ft_strmapi

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

Applies a function to each character of a string, using its index, and creates a new string containing the results.

**Parameters:**

• `s`: The original string..
• `f`: The function to apply to each character..

**Returns:** The newly allocated string, or `NULL` if allocation fails.

#### ft_striteri

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

Applies a function to each character of a string, passing its index and address. The function can modify the original string directly.

**Parameters:**

• `s`: The string to iterate through..
• `f`: The function to apply to each character..

**Returns:** Nothing (`void`).

#### ft_putchar_fd

```c
void ft_putchar_fd(char c, int fd);
```

Writes a single character to the specified file descriptor.

**Parameters:**

• `c`: The character to write..
• `fd`: The file descriptor..

**Returns:** Nothing (`void`).

#### ft_putstr_fd

```c
void ft_putstr_fd(char *s, int fd);
```

Writes a string to the specified file descriptor.

**Parameters:**

• `s`: The string to write..
• `fd`: The file descriptor..

**Returns:** Nothing (`void`).

#### ft_putendl_fd

```c
void ft_putendl_fd(char *s, int fd);
```

Writes a string followed by a newline to the specified file descriptor.

**Parameters:**

• `s`: The string to write..
• `fd`: The file descriptor..

**Returns:** Nothing (`void`).

#### ft_putnbr_fd

```c
void ft_putnbr_fd(int n, int fd);
```

Writes an integer in decimal form to the specified file descriptor.

**Parameters:**

• `n`: The integer to write..
• `fd`: The file descriptor..

**Returns:** Nothing (`void`).

### Part 3 - Bonus: Linked lists

This part contains 9 functions for creating and manipulating singly linked lists.

A linked list is a data structure made of nodes. Each node contains a pointer to its content and a pointer to the next node in the list.

These functions allow us to create nodes, add them to a list, traverse the list, modify its content, and free allocated memory.

#### ft_lstnew

```c
t_list *ft_lstnew(void *content);
```

Allocates memory for a new node, initializes its content with the provided pointer, and sets its next pointer to `NULL`.

**Parameters:**

• `content`: The content to store in the new node..

**Returns:** A pointer to the new node, or `NULL` if allocation fails.

#### ft_lstadd_front

```c
void ft_lstadd_front(t_list **lst, t_list *new);
```

Adds a new node to the beginning of a linked list.

**Parameters:**

• `lst`: A pointer to the pointer to the first node..
• `new`: The node to add..

**Returns:** Nothing (`void`).

#### ft_lstsize

```c
int ft_lstsize(t_list *lst);
```

Counts the number of nodes in a linked list.

**Parameters:**

• `lst`: A pointer to the first node..

**Returns:** The total number of nodes in the list.

#### ft_lstlast

```c
t_list *ft_lstlast(t_list *lst);
```

Traverses the list and finds its last node.

**Parameters:**

• `lst`: A pointer to the first node..

**Returns:** A pointer to the last node, or `NULL` if the list is empty.

#### ft_lstadd_back

```c
void ft_lstadd_back(t_list **lst, t_list *new);
```

Adds a new node to the end of a linked list.

**Parameters:**

• `lst`: A pointer to the pointer to the first node..
• `new`: The node to add..

**Returns:** Nothing (`void`).

#### ft_lstdelone

```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

Deletes a single node by applying the function `del` to its content and freeing the node itself.

**Parameters:**

• `lst`: The node to delete..
• `del`: The function used to delete the node's content..

**Returns:** Nothing (`void`).

#### ft_lstclear

```c
void ft_lstclear(t_list **lst, void (*del)(void *));
```

Deletes and frees a node and all the following nodes, using `del` to free their content. Sets the original list pointer to `NULL`.

**Parameters:**

• `lst`: A pointer to the pointer to the first node to delete..
• `del`: The function used to delete each node's content..

**Returns:** Nothing (`void`).

#### ft_lstiter

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```

Iterates through the linked list and applies the function `f` to the content of each node.

**Parameters:**

• `lst`: A pointer to the first node..
• `f`: The function to apply to each node's content..

**Returns:** Nothing (`void`).

#### ft_lstmap

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

Creates a new linked list by applying the function `f` to the content of each node in the original list.

If allocation fails, the function uses `del` to clean up the content of the newly created nodes and frees those nodes.

**Parameters:**

• `lst`: A pointer to the first node of the original list..
• `f`: The function used to transform each node's content..
• `del`: The function used to clean up newly created content if allocation fails..

**Returns:** A pointer to the first node of the new list, or `NULL` if allocation fails.

## Resources
The following resources were used for learning and understanding the concepts covered in Libft:

- **my most helpful friends and peers.**
- **42 Libft subject:** Project requirements and function specifications.
- **C manual pages (`man`):** Documentation of standard C library functions.
- **[Harvard CS50](https://www.youtube.com/@cs50):** Lectures on C programming, pointers, memory management, and data structures.
- **[Python Tutor](https://pythontutor.com/):** Used to visualize C code execution, pointers, and memory management..

### AI Usage

ChatGPT was used as a learning aid to clarify programming concepts, lots of games created personalised for understanding memory and pointers, and assist with writing and formatting this README.
