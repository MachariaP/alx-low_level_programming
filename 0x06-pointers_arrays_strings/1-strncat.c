#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
  int i;
  
  for (i = 0; i < n && *src != '\0'; i++)
  {
    *dest++ = *src++;
  }
  
  *dest = '\0';
  return dest;
}

