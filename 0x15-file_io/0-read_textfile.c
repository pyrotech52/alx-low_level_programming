#include "main.h"
/**
* read_textfile - reads a text file
* @filename: file name
* @letters: parameters
* Return: actual numbers else 0 if failed
*/
ssize_t read_textfile(const char *filename, size_t letters)

{
int fd;
ssize_t x, y;
char *z;
if (!filename)
return (0);
fd = open
(filename, O_RDONLY);
if (fd == -1)
return (0);
z = malloc(sizeof(char) * (letters));
if (!z)
return (0);
x = read(fd, z, letters);
y = write(STDOUT_FILENO, z, x);
close(fd);
free(z);
return (y);
}
