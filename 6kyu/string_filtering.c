/*
DESCRIPTION:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in. Additionally, if the number is negative, return 0 (for languages that do have them).

Note: If the number is a multiple of both 3 and 5, only count it once.
*/

#include <string.h>

void removeChar(char *str, char garbage) {
    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}

char* filterRefsOut(char *source) {
    char *start, *end;
  
    while((start = strpbrk(source, "[")) && (end = strpbrk(start, "]"))) {
        memmove(start, end + 1, strlen(end + 1) + 1);
    }
  
    removeChar(source, '[');
    removeChar(source, ']');
  
    return source;
}
