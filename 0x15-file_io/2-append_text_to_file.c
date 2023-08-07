#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file to append.
* @text_content: The content to append to the file.
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, res_write, length;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);

length = 0;
while (*(text_content + length) != '\0')
length++;

res_write = write(file_descriptor, text_content, length);
if (res_write == -1)
{
close(file_descriptor);
write(STDOUT_FILENO, "fails", 5);
return (-1);
}

close(file_descriptor);
}

return (1);
}

