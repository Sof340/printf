#include "main.h"
#include <stdio.h>





int main(void)
{
	int i;
	i = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d", i);
	return(0);	
}
