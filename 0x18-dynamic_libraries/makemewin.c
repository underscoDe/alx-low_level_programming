#include <stdio.h>
#include <stdlib.h>

/**
 * rand - normally a random number generator
 *
 * Return: normally a random number
 * Description: this is our custom random number generator
 *      for the make me win project task. We know that the
 *      gm program uses a random number generator then
 *      the C rand or srand function (obviously ^^). We'll use
 *      the LD_PRELOAD method to make the gm program
 *      use our srand function instead of C's
 *
 */
void srand(unsigned int seed)
{
	printf("%d %d %d %d %d %d\n", 9, 8, 10, 24, 75, 9);
	printf("Congratulations, you win the Jackpot!\n");
	exit(1);
}
