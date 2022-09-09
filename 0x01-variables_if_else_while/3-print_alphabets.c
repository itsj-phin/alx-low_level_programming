#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: 0 after successful execution
*/

int  main(void)
{
char alphABET;

for (alphABET = 'a'; alphABET <= 'z'; alphABET++)
{
putchar(alphABET);
}
for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
{
putchar(alphABET);
}
putchar('\n');
return (0);
}   
