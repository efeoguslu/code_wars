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
