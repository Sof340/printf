#include "main.h"





int main(void)
{
	int i;
	char c = 'D';
	i = _printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", c);
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	return(i);
}

