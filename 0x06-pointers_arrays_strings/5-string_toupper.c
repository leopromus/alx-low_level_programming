#include "main.h"
//changes all lowercase letters to uppercase
char *string_toupper(char *)
{
	int i=0;
	while (str[i]!= '\0')
	{
		if(str[i]>= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
