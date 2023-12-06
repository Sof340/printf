#include "main.h"

/**
 * printf - this funtion prints chars, string chars , % and int.
 * @format : character string.
 * @... : rest of the paramettre given to the function.
 * Return : number of characters printed
 */



int _printf(const char *format, ...)
{
	int n, i, j, m ,k;
	int f;
	char *s;
	/* we declare a va_list pointer variable to use later
	 * we name str 
	 */
	va_list str;
	va_start(str, format);

	/*initialization of different variables*/

	m = 0;
	k = 0;
	n = 0;
	
	/*this for loop is used to get the length othe sentence to prints*/

	for (i = 0; format[i] != '\0'; i++)
       		n++;
	
	/*this for loop will be our main program*/

	for (i = 0; i < n; i++)
	{
		/*When we stumbel with an identifier we check the caracter next to it*/
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{	
				k += _putchar(va_arg(str, int));
				i = i + 1;
			}
			else if (format[i + 1] == '%')
			{
				/*if we stumbel upon a second % we just print it */
                                k += _putchar('%');
                                i = i + 1;
                        }
			else if (format[i + 1] == 's')
			{
				/*inorder to print a string char we allocate the next argment to 
				 * the char pointer we declared eailier then we calculate the
				 * length of the string char using a loop for*/
				s = va_arg(str, char*);
				if (s == NULL)
				{
					k += _putchar("(null)");
					continue;
				}
				for (j = 0 ; s[j] != '\0'; j++)
					m++;
				for (j = 0; j < m; j++)
				       	k += _putchar(s[j]);
                                i = i + 1;
                        }else if (format[i + 1] == 'd')
			{
				f = va_arg(str, int);
				k += printnumber(f, k);
			}
		}
		else
			/*print the normal inputed text*/
			k += _putchar(format[i]);
	}
	/*we return k the number of printed caracters*/
	return (k);
}

