#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: 0 zero
 */
int main(void)
{
char ch = 'a'; /*Declaring statement */
for(ch = 'a'; ch  <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return(0);
}
