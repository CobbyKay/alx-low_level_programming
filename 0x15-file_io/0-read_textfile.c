#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it to the POSIX
* standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
* Return: The number of letters read and printed.
*/
ssize_t custom_read_textfile(const char *filename, size_t letters)
{
ssize_t fd, read_bytes, written_bytes;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

read_bytes = read(fd, buffer, letters);
if (read_bytes == -1)
{
free(buffer);
close(fd);
return (0);
}

written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

if (written_bytes == -1 || read_bytes != written_bytes)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (written_bytes);
}

