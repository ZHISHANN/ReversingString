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

/*char ReversingString(char *str)
{
  int i, j = 0, count;
  char revStr[j],*revSTR;

  count = getStringLength(str);
  i = count -1;

  for (j = 0;j<count;j++)
  {
    revStr[j] = str[i];
    i--;
  }

  while (revStr[j] != '\0')
  {
    revSTR = revStr[j];
  }
  return revSTR;
}*/
