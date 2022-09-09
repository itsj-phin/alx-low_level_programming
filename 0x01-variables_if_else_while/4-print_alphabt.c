#include <stdio.h>

/**
* main - prints the alphabet in lowercase excepr q and e
* Return: 0 after successful execution
*/ 

int main(void)
{
char alphy;

for (alphy = 'a'; alphy <= 'z'; alphy++)
{
if (alphy != 'e' && alphy != 'q')
{
putchar(alphy);
}
}
putchar('\n');
return (0);
}   
