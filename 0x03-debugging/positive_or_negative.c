#include "main.h"
/**
* positive_or_negative - Print if the given integer.
* @i: The integer to be checked.
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
