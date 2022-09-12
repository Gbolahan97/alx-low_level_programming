#include <stdio.h>
/**
* main - Entry point
* Description: using the main function
* this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
* Return: 0
*/
int main(void)
{
int c = 0;
int f_d;
int l_d;
while (c <= 99)
{
	f_d = (c / 10 + '0');
	l_d = (c % 10 + '0');
if (f_d < l_d)
{
	putchar(f_d);
	putchar(l_d);
if (c != 89)
{
	putchar(',');
	putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}
