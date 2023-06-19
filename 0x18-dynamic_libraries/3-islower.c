#include "main.h"

/**
 * _islower - Entry point
 * Description: check  character is lowercase
 * @c: the integer values it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
