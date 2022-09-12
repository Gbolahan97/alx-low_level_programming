#include <stdio.h>
/**
* main - Entry pont
*
* Return: Always 0 (success/correct)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'e' && letter != 'q')
		putchar(letter);
}
putchar('\n');
return (0);
}	
