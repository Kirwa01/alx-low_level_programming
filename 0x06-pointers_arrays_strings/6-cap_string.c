#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @i:string to be capitalized
 * Return: returns a capitalized string
 */
char *cap_string(char *i)
{
	int strcnt;

	strcnt = 0;

	while (i[strcnt] != '\0')
	{
		if (i[0] >= 97 && i[0] <= 122)
		{
			i[0] = i[0] - 32;
		}
	if (i[strcnt] == ' ' || i[strcnt] == '\t' || i[strcnt == '\n'
			|| i[strcnt] == ',' || i[strcnt] == ';' || i[strcnt] == '.'
			|| i[strcnt] == '.' || i[strcnt] == '!' || i[strcnt] == '?'
			|| i[strcnt] == '"' || i[strcnt] == '(' || i[strcnt] == ')' 
			|| i[strcnt] == '{' || i[strcnt] == 'i}')

	if (i[strcnt + 1] >= 97 && i[strcnt + 1] <= 122)
	{
		i[strcnt + 1] = i[strcnt + 1] - 32;
	}
	strcnt++;

	return (i);
}
