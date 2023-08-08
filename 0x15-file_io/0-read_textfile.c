#include <stdio.h>
#include "holberton.h"
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
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor, res_read, res_write;
char *buffer;

if (filename == NULL)
return (0);

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

res_read = read(file_descriptor, buffer, letters);
if (res_read == -1)
{
free(buffer);
return (0);
}

res_write = write(STDOUT_FILENO, buffer, res_read);
if (res_write == -1 || (size_t)res_read != (size_t)res_write)
{
free(buffer);
return (0);
}

free(buffer);
close(file_descriptor);
return (res_write);
}

