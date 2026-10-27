*This project has been created as part of the 42 curriculum by anrassou.*

# Libft



## Description



Libft is the first project of the 42 common core. The goal is to write my own C library: a collection of general-purpose functions.



The repository contains:

* `ft_*.c`: one source file per function (43 functions).
* `libft.h`: the header, with the prototypes of all the functions and the `t_list` type.
* `Makefile`: compiles all the source files and builds the static library `libft.a`.



## Instructions

To compile the library, run at the root of the repository:

```bash
make
```

This creates `libft.a`. Other rules:

* `make clean`: removes the object files (`.o`).
* `make fclean`: removes the object files and `libft.a`.
* `make re`: removes everything and compiles again.

To use the library in a program, include the header with `#include "libft.h"` and compile the program with `libft.a`:

```bash
cc main.c libft.a
```



## Resources



* The manual pages in the terminal, for example `man 3 strlen` or `man 3 malloc`.
* The Linux manual pages online.
* The project subject.



### AI usage



AI (Claude) was used:

* to write this README;
* to test the edge cases of my functions: comparing them with the real libc functions on many inputs, and checking for memory errors and leaks;
* to explain concepts (pointers, memory, `size_t`, linked lists, function pointers) and to  understand compiler errors;

## 

## Library description



### Part 1: libc functions



#### ft_isalpha

`int ft_isalpha(int c);`
Checks if `c` is a letter (`a`-`z` or `A`-`Z`).

* `c`: the character to check.
* Returns `1` if it is a letter, `0` otherwise.



#### ft_isdigit

`int ft_isdigit(int c);`
Checks if `c` is a digit (`0`-`9`).

* `c`: the character to check.
* Returns `1` if it is a digit, `0` otherwise.



#### ft_isalnum

`int ft_isalnum(int c);`
Checks if `c` is a letter or a digit.

* `c`: the character to check.
* Returns `1` if it is a letter or a digit, `0` otherwise.



#### ft_isascii

`int ft_isascii(int c);`
Checks if `c` is an ASCII value (`0` to `127`).

* `c`: the value to check.
* Returns `1` if it is ASCII, `0` otherwise.



#### ft_isprint

`int ft_isprint(int c);`
Checks if `c` is a printable character, space included (`32` to `126`).

* `c`: the character to check.
* Returns `1` if it is printable, `0` otherwise.



#### ft_strlen

`size_t ft_strlen(const char *s);`
Counts the characters of a string.

* `s`: the string.
* Returns the number of characters, without the final `'\0'`.



#### ft_memset

`void *ft_memset(void *s, int c, size_t n);`
Fills the first `n` bytes of the memory area `s` with the byte `c`.

* `s`: the memory area to fill.
* `c`: the byte value to write.
* `n`: the number of bytes to fill.
* Returns `s`.



#### ft_bzero

`void ft_bzero(void *s, size_t n);`
Sets the first `n` bytes of the memory area `s` to zero.

* `s`: the memory area.
* `n`: the number of bytes to set to zero.
* Returns nothing.



#### ft_memcpy

`void *ft_memcpy(void *dest, const void *src, size_t n);`
Copies `n` bytes from `src` to `dest`. The two areas must not overlap.

* `dest`: where to copy.
* `src`: what to copy.
* `n`: the number of bytes to copy.
* Returns `dest`.



#### ft_memmove

`void *ft_memmove(void *dest, const void *src, size_t n);`
Copies `n` bytes from `src` to `dest`, even if the two areas overlap.

* `dest`: where to copy.
* `src`: what to copy.
* `n`: the number of bytes to copy.
* Returns `dest`.



#### ft_strlcpy

`size_t ft_strlcpy(char *dst, const char *src, size_t size);`
Copies the string `src` into `dst`, a buffer of `size` bytes. It copies at most `size - 1` characters and always ends `dst` with `'\0'` (if `size` is not `0`).

* `dst`: the destination buffer.
* `src`: the string to copy.
* `size`: the total size of `dst`.
* Returns the length of `src`.



#### ft_strlcat

`size_t ft_strlcat(char *dst, const char *src, size_t size);`
Adds the string `src` at the end of `dst`, a buffer of `size` bytes, without overflowing it. The result always ends with `'\0'`.

* `dst`: the string to complete.
* `src`: the string to add.
* `size`: the total size of `dst`.
* Returns the length of the string it tried to create: the initial length of `dst` plus the length of `src` (or `size` plus the length of `src` if `size` is smaller than or equal to the length of `dst`).



#### ft_toupper

`int ft_toupper(int c);`
Converts a lowercase letter to uppercase.

* `c`: the character to convert.
* Returns the uppercase letter, or `c` unchanged if it is not a lowercase letter.



#### ft_tolower

`int ft_tolower(int c);`
Converts an uppercase letter to lowercase.

* `c`: the character to convert.
* Returns the lowercase letter, or `c` unchanged if it is not an uppercase letter.



#### ft_strchr

`char *ft_strchr(const char *s, int c);`
Finds the first occurrence of the character `c` in the string `s`. The final `'\0'` can also be found.

* `s`: the string to search.
* `c`: the character to find.
* Returns a pointer to the character found, or `NULL` if it is not in `s`.



#### ft_strrchr

`char *ft_strrchr(const char *s, int c);`
Finds the last occurrence of the character `c` in the string `s`.

* `s`: the string to search.
* `c`: the character to find.
* Returns a pointer to the character found, or `NULL` if it is not in `s`.



#### ft_strncmp

`int ft_strncmp(const char *s1, const char *s2, size_t n);`
Compares at most the first `n` characters of two strings.

* `s1`, `s2`: the strings to compare.
* `n`: the maximum number of characters to compare.
* Returns `0` if they are equal, a negative number if `s1` is smaller, a positive number if `s1` is greater.



#### ft_memchr

`void *ft_memchr(const void *s, int c, size_t n);`
Finds the first byte equal to `c` in the first `n` bytes of `s`.

* `s`: the memory area to search.
* `c`: the byte to find.
* `n`: the number of bytes to search.
* Returns a pointer to the byte found, or `NULL` if it is not found.



#### ft_memcmp

`int ft_memcmp(const void *s1, const void *s2, size_t n);`
Compares the first `n` bytes of two memory areas.

* `s1`, `s2`: the memory areas to compare.
* `n`: the number of bytes to compare.
* Returns `0` if they are equal, a negative number if `s1` is smaller, a positive number if `s1` is greater.



#### ft_strnstr

`char *ft_strnstr(const char *big, const char *little, size_t len);`
Finds the first occurrence of the string `little` in the string `big`, searching at most `len` characters.

* `big`: the string to search.
* `little`: the string to find.
* `len`: the maximum number of characters to search.
* Returns `big` if `little` is empty, a pointer to the start of `little` in `big`, or `NULL` if it is not found.



#### ft_atoi

`int ft_atoi(const char *nptr);`
Converts a string to an `int`. It skips the spaces at the beginning, reads one optional `+` or `-`, then reads the digits.

* `nptr`: the string to convert.
* Returns the converted number.



#### ft_calloc

`void *ft_calloc(size_t nmemb, size_t size);`
Allocates memory for `nmemb` elements of `size` bytes and sets all the bytes to zero.

* `nmemb`: the number of elements.
* `size`: the size of one element.
* Returns a pointer to the allocated memory, or `NULL` if the allocation fails.



#### ft_strdup

`char *ft_strdup(const char *s);`
Creates a new copy of the string `s`, using `malloc`.

* `s`: the string to copy.
* Returns the new string, or `NULL` if the allocation fails.



### Part 2: additional functions



#### ft_substr

`char *ft_substr(char const *s, unsigned int start, size_t len);`
Creates a new string from a part of `s`, using `malloc`.

* `s`: the original string.
* `start`: the index where the substring starts.
* `len`: the maximum length of the substring.
* Returns the substring (an empty string if `start` is after the end of `s`), or `NULL` if the allocation fails.



#### ft_strjoin

`char *ft_strjoin(char const *s1, char const *s2);`
Creates a new string made of `s1` followed by `s2`, using `malloc`.

* `s1`: the first string.
* `s2`: the string to add after `s1`.
* Returns the new string, or `NULL` if the allocation fails.



#### ft_strtrim

`char *ft_strtrim(char const *s1, char const *set);`
Creates a copy of `s1` without the characters of `set` at the beginning and at the end, using `malloc`.

* `s1`: the string to trim.
* `set`: the characters to remove.
* Returns the trimmed string, or `NULL` if the allocation fails.



#### ft_split

`char **ft_split(char const *s, char c);`
Splits the string `s` into words, using the character `c` as a separator. The words and the array are created with `malloc`, and the array ends with `NULL`.

* `s`: the string to split.
* `c`: the separator.
* Returns the array of words, or `NULL` if an allocation fails.



#### ft_itoa

`char *ft_itoa(int n);`
Converts an `int` to a string, using `malloc`. Negative numbers are handled.

* `n`: the number to convert.
* Returns the new string, or `NULL` if the allocation fails.



#### ft_strmapi

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
Creates a new string where each character is the result of `f` applied to the character of `s` at the same index, using `malloc`.

* `s`: the string to go through.
* `f`: the function to apply; it receives the index and the character.
* Returns the new string, or `NULL` if the allocation fails.



#### ft_striteri

`void ft_striteri(char *s, void (*f)(unsigned int, char *));`
Applies `f` to each character of `s`. Each character is passed by address, so `f` can modify it directly in `s`.

* `s`: the string to go through.
* `f`: the function to apply; it receives the index and the address of the character.
* Returns nothing.



#### ft_putchar_fd

`void ft_putchar_fd(char c, int fd);`
Writes the character `c` on the file descriptor `fd`.

* `c`: the character to write.
* `fd`: the file descriptor (`1` for the standard output, `2` for the error output).
* Returns nothing.



#### ft_putstr_fd

`void ft_putstr_fd(char *s, int fd);`
Writes the string `s` on the file descriptor `fd`.

* `s`: the string to write.
* `fd`: the file descriptor.
* Returns nothing.



#### ft_putendl_fd

`void ft_putendl_fd(char *s, int fd);`
Writes the string `s` followed by a newline on the file descriptor `fd`.

* `s`: the string to write.
* `fd`: the file descriptor.
* Returns nothing.



#### ft_putnbr_fd

`void ft_putnbr_fd(int n, int fd);`
Writes the number `n` on the file descriptor `fd`.

* `n`: the number to write.
* `fd`: the file descriptor.
* Returns nothing.



### Part 3: linked lists



A list is made of nodes of type `t_list`, defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

* `content`: the address of the data stored in the node.
* `next`: the address of the next node, or `NULL` if it is the last one.



#### ft_lstnew

`t_list *ft_lstnew(void *content);`
Creates a new node with `malloc`. Its `next` is set to `NULL`.

* `content`: the content to store in the node.
* Returns the new node, or `NULL` if the allocation fails.



#### ft_lstadd_front

`void ft_lstadd_front(t_list **lst, t_list *new);`
Adds the node `new` at the beginning of the list.

* `lst`: the address of the pointer to the first node.
* `new`: the node to add.
* Returns nothing.



#### ft_lstsize

`unsigned int ft_lstsize(t_list *lst);`
Counts the nodes of the list.

* `lst`: the first node of the list.
* Returns the number of nodes.



#### ft_lstlast

`t_list *ft_lstlast(t_list *lst);`
Finds the last node of the list.

* `lst`: the first node of the list.
* Returns the last node, or `NULL` if the list is empty.



#### ft_lstadd_back

`void ft_lstadd_back(t_list **lst, t_list *new);`
Adds the node `new` at the end of the list.

* `lst`: the address of the pointer to the first node.
* `new`: the node to add.
* Returns nothing.



#### ft_lstdelone

`void ft_lstdelone(t_list *lst, void (*del)(void *));`
Frees the content of one node with `del`, then frees the node itself. The next node is not freed.

* `lst`: the node to free.
* `del`: the function used to delete the content.
* Returns nothing.



#### ft_lstclear

`void ft_lstclear(t_list **lst, void (*del)(void *));`
Deletes and frees a node and all the nodes after it, then sets the pointer to the list to `NULL`.

* `lst`: the address of the pointer to the first node.
* `del`: the function used to delete the content of each node.
* Returns nothing.



#### ft_lstiter

`void ft_lstiter(t_list *lst, void (*f)(void *));`
Applies the function `f` to the content of each node.

* `lst`: the first node of the list.
* `f`: the function to apply to each content.
* Returns nothing.



#### ft_lstmap

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
Creates a new list where each content is the result of `f` applied to the content of the original list. The original list is not modified.

* `lst`: the first node of the original list.
* `f`: the function applied to each content.
* `del`: the function used to delete a content if needed.
* Returns the new list, or `NULL` if an allocation fails.

