# 0x0C. C - More malloc, free

Solutions for the mandatory dynamic memory allocation tasks.

- 0-malloc_checked.c: allocate memory and exit with status 98 if malloc fails.
- 1-string_nconcat.c: concatenate two strings, copying at most n bytes of the second.
- 2-calloc.c: allocate an array and initialize its bytes to zero.
- 3-array_range.c: create an integer array from min through max.

Compile with the required flags and each task's supplied main file:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c TASK_FILE.c -o test
