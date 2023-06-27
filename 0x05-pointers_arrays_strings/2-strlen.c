#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	    int l = 0;

	        while (*s != '\0')
			    {
				            l++;
					            s++;
						        }
		    return (l);
}
int main(void)
{
	    char *str;
	        int len;

		    str = "My first strlen!";
		        len = _strlen(str);
			    printf("%d\n", len);
			        return (0);
}
