#include "main.h"

/**
 * printf_int - this funtion prints chars, string chars and %.
 * @format : character string.
 * @... : rest of the paramettre given to the function.
 * Return : number of characters printed
 */


int printnumber(int n, int k)
{
	k++;

	 if (n < 0) 
	 {
		 _putchar('-');
		 n = -n;
	 }

	 if (n == 0)
		 _putchar('0');
	
	 if (n/10)
		 printnumber(n/10, k);
	
	 _putchar(n%10 + '0');
	 return(k);
}

