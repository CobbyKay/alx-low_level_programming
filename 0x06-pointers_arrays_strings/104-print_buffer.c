#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
  *print_buffer - prints a buffer
  *@b: character input
  *@size: size of integer
  */
void print_buffer(char *b, int size)
{
if (size <= 0)
{
printf("\n");
return;
}

int i, j;

unsigned char *buffer = (unsigned char *) b;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", buffer[j]);
else
printf("  ");

if (j % 2 != 0)
printf(" ");
}

for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (isprint(buffer[j]))
printf("%c", buffer[j]);
else
printf(".");
}
}

printf("\n");
}
}

