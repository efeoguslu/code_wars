/*
DESCRIPTION:
Challenge:
Most of us used to need to make a quick copy of text from Wikipedia, but those reference marks, e.g. [1], sprinkled all over can get quite annoying!

Now you, code warrior, are about to make a difference!

Given a string, remove in-place all reference marks (which have the format [n], where n - is an integer) and return it.

It's important to note, however, that these marks do not nest - thus you should not worry about the cases with nested marks, e.g. [[1]].

Reference marks do stack, though, e.g. [1][2][3].

It is also guaranteed that there will be no marks with non-digits between the brackets.
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
