#include <stdlib.h>
#include <unistd.h>

/**
 * srand - normally a random number generator
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
	const char *nums_txt = "9 8 10 24 75 - 9\n";
	const char *txt = "Congratulations, you win the Jackpot!\n";

	(void)seed;
	write(STDOUT_FILENO, (void *)nums_txt, 17);
	write(STDOUT_FILENO, (void *)txt, 38);
	exit(EXIT_SUCCESS);
}
