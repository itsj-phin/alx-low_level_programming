#include <stdio.h>

/**
 * * main - print lowercase alphabet in reverse order
 * * Return: 0 after successful execution
*/

int main(void)
{
char alphy;
for (alphy = 'z'; alphy >= 'a'; alphy--)
{
putchar(alphy);
}
putchar('\n');
return (0);
}
