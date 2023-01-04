#include "main.h"

/**
 * _strstr - first occurance of the substring needle in the string haystack
 * @needle: searched in haystack
 * Return: return 0
 **/

char *_strstr(char *haystack, char *needle)
{
	char *str, *str; /*Declaring variable*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*star WHILE*/
		while (*haystack != '\0' && *haystack == *str2)
		{
			haystack++;
			str++;
		}
		if (*str == '\0')
			return (str1);
		haystack = str + 1;
	}
	return (0);
}

