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
  //char *ptr;
  int length = getStringLength(str);
  static char temp_str[100];
  //ptr = str;

  while (*ptr != '\0')
  {
    temp_str[length - 1] = *ptr;
    ptr++;
    length--;
  }
  return temp_str;
}
