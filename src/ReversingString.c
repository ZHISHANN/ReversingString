#include <stdio.h>
#include "ReversingString.h"
#include <malloc.h>

int getStringLength(char *str)
{
  int length = 0;

  if (str == NULL || *str  == 0)
    return 0;
  else
  {
    while (str[length] != '\0')
      length++;
      return length;
  }
}

char *ReversingString(char *str)
{
  char *ptr = str;
  int length = getStringLength(str);
  char *temp,len;
  len = length - 1;
  temp = malloc(length + 1);

  while (*ptr != '\0')
  {
    temp[len] = *ptr;
    ptr++;
    len--;
  }
  
  temp[length] = '\0';
  return temp;
  free(temp);
}
