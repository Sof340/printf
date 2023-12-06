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




int printf_int(const char *format, ...)
{
        int n, i, k;
	int f;
        /* we declare a va_list pointer variable to use later
         * we name str 
         */
        va_list str;
        va_start(str, format);

        /*initialization of different variables*/

        k = 0;
        n = 0;

        /*this for loop is used to get the length othe sentence to prints*/

        for (i = 0; format[i] != '\0'; i++)
                n++;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd')
			{
				f = va_arg(str, int);
				k += printnumber(f, k);
			}
		}
		else
			k += _putchar(format[i]);
	}
	return(k);
}

