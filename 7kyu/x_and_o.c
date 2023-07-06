/*
Description:
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.
*/

#include <stdbool.h>
#include <string.h>

bool xo (const char* str)
{
  int len = strlen(str);
  int count_x = 0;
  int count_o = 0;
  
  for(int i = 0; i <= len; ++i){
    if(str[i] == 'x' || str[i] == 'X')
      ++count_x;
    if(str[i] == 'o' || str[i] == 'O')
      ++count_o;
  }
  
  if(count_x == count_o)
    return true;
  
  return false;
}