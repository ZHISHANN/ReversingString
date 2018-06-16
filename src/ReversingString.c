#include <stdio.h>
#include "ReversingString.h"

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
  static char temp_str[100];

  while (*ptr != NULL)
  {
    temp_str[length - 1] = *ptr;
    ptr++;
    length--;
  }
  return temp_str;
}
