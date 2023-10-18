#include "main.h"
/**
 * get_sigint - To handle the crtl + c call in prompt
 * @sig: Signal handle

 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}

