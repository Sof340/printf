#include "main.h"





int _printf(const char *format, ...)
{
	int n, i, j, m ,k;
	char *s;

	va_list str;
	va_start(str, format);
	m = 0;
	n = 0;
	for (i = 0; format[i] != '\0'; i++)
       		n++;
	for (i = 0; i < n; i++)
	{
		if (format[i] == '%')
		{
			if (format[i+1] == 'c')
			{
				k = _putchar(va_arg(str, int));
				i = i + 1;
			}
			else if (format[i+1] == '%')
			{
                                k = _putchar('%');
                                i = i + 1;
                        }
			else if (format[i+1] == 's')
			{
				s = va_arg(str, char*);
				for (j = 0 ; s[j] != '\0'; j++)
					m++;
				for (j = 0; j < m; j++)
				       	k = _putchar(s[j]);
                                i = i + 1;
                        }
		}
		else
			k = _putchar(format[i]);
	}
	return (k);
}

