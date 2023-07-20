include "main.h"
/**
* positive_or_negative -
* @i: The integer to be checked.
*
* This function takes an integer as input
* If the integer is positive, it prints "<number> is positive".
* If the integer is negative, it prints "<number> is negative".
* If the integer is zero, it prints "<number> is zero".
* The function does not return anything (void).
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
