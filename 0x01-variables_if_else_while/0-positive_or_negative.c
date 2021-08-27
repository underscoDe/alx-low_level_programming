#include <stidio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: returns 0 when everything works fine
*
*/

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");
    return (0);
}