#include "main.h"





int main(void)
{
	int i;
	char c = 'D';
	int len;
	int len2;
	len = printf_char_string("Let's try to printf a simple sentence.\n");
	len2 = printf_int("Let's try to printf a simple sentence.\n");
	printf_int("Len:[%d]\n", len);
	printf_int("Len:[%d]\n", len2);
	i = printf_char_string("Let's try to printf a simple sentence.\n");
	printf_char_string("Character:[%c]\n", c);
	printf_char_string("String:[%s]\n", "I am a string !");
	return(i);
}

