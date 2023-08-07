#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* create_file - Creates a file and writes the given content to it.
* @filename: The name of the file to create.
* @text_content: The content to write to the file.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor, length;
ssize_t res_write;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
length = 0;
while (*(text_content + length) != '\0')
length++;

res_write = write(file_descriptor, text_content, length);
if (res_write == -1)
{
write(1, "fails", 6);
return (-1);
}
}

close(file_descriptor);
return (1);
}

