#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int alphy;
int count;

count = 0;

while (count < 10)
{
for (alphy = 'a'; alphy <= 'z'; alphy++)
{
_putchar(alphy);
}

count++;
_putchar('\n')
}

}
