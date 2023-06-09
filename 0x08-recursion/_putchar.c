#include"main.h"
#include <unistd.h>
/**
 * _putchar-writes the character c to stdout
*@c: The character to print
*
*Return: on sucess 1;
*on erroe, -1 is returned error0 is set appropraitely
*/
int _putchar(char c)
{
	return(write(1,&c,1));

}
