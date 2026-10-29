*This project has been created as part of the 42 curriculum by anrassou.*

# Libft



## Description



Libft is the first project of the 42 common core. The goal is to write my own C library: a collection of general-purpose functions.



The repository contains:

* `ft\_\*.c`: one source file per function (43 functions).
* `libft.h`: the header, with the prototypes of all the functions and the `t\_list` type.
* `Makefile`: compiles all the source files and builds the static library `libft.a`.



Library description detailed : 



### Part 1: libc functions



#### ft\_isalpha

`int ft\\\_isalpha(int c);`
Checks if `c` is a letter (`a`-`z` or `A`-`Z`).

* `c`: the character to check.
* Returns `1` if it is a letter, `0` otherwise.



#### ft\_isdigit

`int ft\\\_isdigit(int c);`
Checks if `c` is a digit (`0`-`9`).

* `c`: the character to check.
* Returns `1` if it is a digit, `0` otherwise.



#### ft\_isalnum

`int ft\\\_isalnum(int c);`
Checks if `c` is a letter or a digit.

* `c`: the character to check.
* Returns `1` if it is a letter or a digit, `0` otherwise.



#### ft\_isascii

`int ft\\\_isascii(int c);`
Checks if `c` is an ASCII value (`0` to `127`).

* `c`: the value to check.
* Returns `1` if it is ASCII, `0` otherwise.



#### ft\_isprint

`int ft\\\_isprint(int c);`
Checks if `c` is a printable character, space included (`32` to `126`).

* `c`: the character to check.
* Returns `1` if it is printable, `0` otherwise.



#### ft\_strlen

`size\\\_t ft\\\_strlen(const char \\\*s);`
Counts the characters of a string.

* `s`: the string.
* Returns the number of characters, without the final `'\\\\0'`.



#### ft\_memset

`void \\\*ft\\\_memset(void \\\*s, int c, size\\\_t n);`
Fills the first `n` bytes of the memory area `s` with the byte `c`.

* `s`: the memory area to fill.
* `c`: the byte value to write.
* `n`: the number of bytes to fill.
* Returns `s`.



#### ft\_bzero

`void ft\\\_bzero(void \\\*s, size\\\_t n);`
Sets the first `n` bytes of the memory area `s` to zero.

* `s`: the memory area.
* `n`: the number of bytes to set to zero.
* Returns nothing.



#### ft\_memcpy

`void \\\*ft\\\_memcpy(void \\\*dest, const void \\\*src, size\\\_t n);`
Copies `n` bytes from `src` to `dest`. The two areas must not overlap.

* `dest`: where to copy.
* `src`: what to copy.
* `n`: the number of bytes to copy.
* Returns `dest`.



#### ft\_memmove

`void \\\*ft\\\_memmove(void \\\*dest, const void \\\*src, size\\\_t n);`
Copies `n` bytes from `src` to `dest`, even if the two areas overlap.

* `dest`: where to copy.
* `src`: what to copy.
* `n`: the number of bytes to copy.
* Returns `dest`.



#### ft\_strlcpy

`size\\\_t ft\\\_strlcpy(char \\\*dst, const char \\\*src, size\\\_t size);`
Copies the string `src` into `dst`, a buffer of `size` bytes. It copies at most `size - 1` characters and always ends `dst` with `'\\\\0'` (if `size` is not `0`).

* `dst`: the destination buffer.
* `src`: the string to copy.
* `size`: the total size of `dst`.
* Returns the length of `src`.



#### ft\_strlcat

`size\\\_t ft\\\_strlcat(char \\\*dst, const char \\\*src, size\\\_t size);`
Adds the string `src` at the end of `dst`, a buffer of `size` bytes, without overflowing it. The result always ends with `'\\\\0'`.

* `dst`: the string to complete.
* `src`: the string to add.
* `size`: the total size of `dst`.
* Returns the length of the string it tried to create: the initial length of `dst` plus the length of `src` (or `size` plus the length of `src` if `size` is smaller than or equal to the length of `dst`).



#### ft\_toupper

`int ft\\\_toupper(int c);`
Converts a lowercase letter to uppercase.

* `c`: the character to convert.
* Returns the uppercase letter, or `c` unchanged if it is not a lowercase letter.



#### ft\_tolower

`int ft\\\_tolower(int c);`
Converts an uppercase letter to lowercase.

* `c`: the character to convert.
* Returns the lowercase letter, or `c` unchanged if it is not an uppercase letter.



#### ft\_strchr

`char \\\*ft\\\_strchr(const char \\\*s, int c);`
Finds the first occurrence of the character `c` in the string `s`. The final `'\\\\0'` can also be found.

* `s`: the string to search.
* `c`: the character to find.
* Returns a pointer to the character found, or `NULL` if it is not in `s`.



#### ft\_strrchr

`char \\\*ft\\\_strrchr(const char \\\*s, int c);`
Finds the last occurrence of the character `c` in the string `s`.

* `s`: the string to search.
* `c`: the character to find.
* Returns a pointer to the character found, or `NULL` if it is not in `s`.



#### ft\_strncmp

`int ft\\\_strncmp(const char \\\*s1, const char \\\*s2, size\\\_t n);`
Compares at most the first `n` characters of two strings.

* `s1`, `s2`: the strings to compare.
* `n`: the maximum number of characters to compare.
* Returns `0` if they are equal, a negative number if `s1` is smaller, a positive number if `s1` is greater.



#### ft\_memchr

`void \\\*ft\\\_memchr(const void \\\*s, int c, size\\\_t n);`
Finds the first byte equal to `c` in the first `n` bytes of `s`.

* `s`: the memory area to search.
* `c`: the byte to find.
* `n`: the number of bytes to search.
* Returns a pointer to the byte found, or `NULL` if it is not found.



#### ft\_memcmp

`int ft\\\_memcmp(const void \\\*s1, const void \\\*s2, size\\\_t n);`
Compares the first `n` bytes of two memory areas.

* `s1`, `s2`: the memory areas to compare.
* `n`: the number of bytes to compare.
* Returns `0` if they are equal, a negative number if `s1` is smaller, a positive number if `s1` is greater.



#### ft\_strnstr

`char \\\*ft\\\_strnstr(const char \\\*big, const char \\\*little, size\\\_t len);`
Finds the first occurrence of the string `little` in the string `big`, searching at most `len` characters.

* `big`: the string to search.
* `little`: the string to find.
* `len`: the maximum number of characters to search.
* Returns `big` if `little` is empty, a pointer to the start of `little` in `big`, or `NULL` if it is not found.



#### ft\_atoi

`int ft\\\_atoi(const char \\\*nptr);`
Converts a string to an `int`. It skips the spaces at the beginning, reads one optional `+` or `-`, then reads the digits.

* `nptr`: the string to convert.
* Returns the converted number.



#### ft\_calloc

`void \\\*ft\\\_calloc(size\\\_t nmemb, size\\\_t size);`
Allocates memory for `nmemb` elements of `size` bytes and sets all the bytes to zero.

* `nmemb`: the number of elements.
* `size`: the size of one element.
* Returns a pointer to the allocated memory, or `NULL` if the allocation fails.



#### ft\_strdup

`char \\\*ft\\\_strdup(const char \\\*s);`
Creates a new copy of the string `s`, using `malloc`.

* `s`: the string to copy.
* Returns the new string, or `NULL` if the allocation fails.



### Part 2: additional functions



#### ft\_substr

`char \\\*ft\\\_substr(char const \\\*s, unsigned int start, size\\\_t len);`
Creates a new string from a part of `s`, using `malloc`.

* `s`: the original string.
* `start`: the index where the substring starts.
* `len`: the maximum length of the substring.
* Returns the substring (an empty string if `start` is after the end of `s`), or `NULL` if the allocation fails.



#### ft\_strjoin

`char \\\*ft\\\_strjoin(char const \\\*s1, char const \\\*s2);`
Creates a new string made of `s1` followed by `s2`, using `malloc`.

* `s1`: the first string.
* `s2`: the string to add after `s1`.
* Returns the new string, or `NULL` if the allocation fails.



#### ft\_strtrim

`char \\\*ft\\\_strtrim(char const \\\*s1, char const \\\*set);`
Creates a copy of `s1` without the characters of `set` at the beginning and at the end, using `malloc`.

* `s1`: the string to trim.
* `set`: the characters to remove.
* Returns the trimmed string, or `NULL` if the allocation fails.



#### ft\_split

`char \\\*\\\*ft\\\_split(char const \\\*s, char c);`
Splits the string `s` into words, using the character `c` as a separator. The words and the array are created with `malloc`, and the array ends with `NULL`.

* `s`: the string to split.
* `c`: the separator.
* Returns the array of words, or `NULL` if an allocation fails.



#### ft\_itoa

`char \\\*ft\\\_itoa(int n);`
Converts an `int` to a string, using `malloc`. Negative numbers are handled.

* `n`: the number to convert.
* Returns the new string, or `NULL` if the allocation fails.



#### ft\_strmapi

`char \\\*ft\\\_strmapi(char const \\\*s, char (\\\*f)(unsigned int, char));`
Creates a new string where each character is the result of `f` applied to the character of `s` at the same index, using `malloc`.

* `s`: the string to go through.
* `f`: the function to apply; it receives the index and the character.
* Returns the new string, or `NULL` if the allocation fails.



#### ft\_striteri

`void ft\\\_striteri(char \\\*s, void (\\\*f)(unsigned int, char \\\*));`
Applies `f` to each character of `s`. Each character is passed by address, so `f` can modify it directly in `s`.

* `s`: the string to go through.
* `f`: the function to apply; it receives the index and the address of the character.
* Returns nothing.



#### ft\_putchar\_fd

`void ft\\\_putchar\\\_fd(char c, int fd);`
Writes the character `c` on the file descriptor `fd`.

* `c`: the character to write.
* `fd`: the file descriptor (`1` for the standard output, `2` for the error output).
* Returns nothing.



#### ft\_putstr\_fd

`void ft\\\_putstr\\\_fd(char \\\*s, int fd);`
Writes the string `s` on the file descriptor `fd`.

* `s`: the string to write.
* `fd`: the file descriptor.
* Returns nothing.



#### ft\_putendl\_fd

`void ft\\\_putendl\\\_fd(char \\\*s, int fd);`
Writes the string `s` followed by a newline on the file descriptor `fd`.

* `s`: the string to write.
* `fd`: the file descriptor.
* Returns nothing.



#### ft\_putnbr\_fd

`void ft\\\_putnbr\\\_fd(int n, int fd);`
Writes the number `n` on the file descriptor `fd`.

* `n`: the number to write.
* `fd`: the file descriptor.
* Returns nothing.



### Part 3: linked lists



A list is made of nodes of type `t\\\_list`, defined in `libft.h`:

```c
typedef struct s\\\_list
{
	void			\\\*content;
	struct s\\\_list	\\\*next;
}	t\\\_list;
```

* `content`: the address of the data stored in the node.
* `next`: the address of the next node, or `NULL` if it is the last one.



#### ft\_lstnew

`t\\\_list \\\*ft\\\_lstnew(void \\\*content);`
Creates a new node with `malloc`. Its `next` is set to `NULL`.

* `content`: the content to store in the node.
* Returns the new node, or `NULL` if the allocation fails.



#### ft\_lstadd\_front

`void ft\\\_lstadd\\\_front(t\\\_list \\\*\\\*lst, t\\\_list \\\*new);`
Adds the node `new` at the beginning of the list.

* `lst`: the address of the pointer to the first node.
* `new`: the node to add.
* Returns nothing.



#### ft\_lstsize

`unsigned int ft\\\_lstsize(t\\\_list \\\*lst);`
Counts the nodes of the list.

* `lst`: the first node of the list.
* Returns the number of nodes.



#### ft\_lstlast

`t\\\_list \\\*ft\\\_lstlast(t\\\_list \\\*lst);`
Finds the last node of the list.

* `lst`: the first node of the list.
* Returns the last node, or `NULL` if the list is empty.



#### ft\_lstadd\_back

`void ft\\\_lstadd\\\_back(t\\\_list \\\*\\\*lst, t\\\_list \\\*new);`
Adds the node `new` at the end of the list.

* `lst`: the address of the pointer to the first node.
* `new`: the node to add.
* Returns nothing.



#### ft\_lstdelone

`void ft\\\_lstdelone(t\\\_list \\\*lst, void (\\\*del)(void \\\*));`
Frees the content of one node with `del`, then frees the node itself. The next node is not freed.

* `lst`: the node to free.
* `del`: the function used to delete the content.
* Returns nothing.



#### ft\_lstclear

`void ft\\\_lstclear(t\\\_list \\\*\\\*lst, void (\\\*del)(void \\\*));`
Deletes and frees a node and all the nodes after it, then sets the pointer to the list to `NULL`.

* `lst`: the address of the pointer to the first node.
* `del`: the function used to delete the content of each node.
* Returns nothing.



#### ft\_lstiter

`void ft\\\_lstiter(t\\\_list \\\*lst, void (\\\*f)(void \\\*));`
Applies the function `f` to the content of each node.

* `lst`: the first node of the list.
* `f`: the function to apply to each content.
* Returns nothing.



#### ft\_lstmap

`t\\\_list \\\*ft\\\_lstmap(t\\\_list \\\*lst, void \\\*(\\\*f)(void \\\*), void (\\\*del)(void \\\*));`
Creates a new list where each content is the result of `f` applied to the content of the original list. The original list is not modified.

* `lst`: the first node of the original list.
* `f`: the function applied to each content.
* `del`: the function used to delete a content if needed.
* Returns the new list, or `NULL` if an allocation fails.





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
* to explain concepts (pointers, memory, `size\_t`, linked lists, function pointers) and to  understand compiler errors;

