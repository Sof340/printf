#include "main.h"





int main(void)
{
	int i;
	char c = 'D';
	int len;
	int len2;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");
	_printf("Len:[%d]\n", len);
	_printf("Len:[%d]\n", len2);
	i = _printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", c);
	_printf("String:[%s]\n", "I am a string !");
	return(i);
}

