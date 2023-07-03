/*
DESCRIPTION:
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).
*/

#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    int string_length = strlen(string);
    int ending_length = strlen(ending);
  
    if(ending_length > string_length)
      return false;
    
    
    if(strcmp(&string[string_length - ending_length], ending) == 0)
      return true;
    
    return false;
}