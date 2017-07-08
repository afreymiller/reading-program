#include <stdio.h>
#define MAXLEN 10

void reverse(char s[]);

main()
{
    char t[10] = "hello";

    reverse(t);

    printf("%s\n", t);

    return 0;
}

void reverse(char s[]){
    int i, k;
    char tmp[MAXLEN];

    i = 0;
    /* copy the character string */
    while ((tmp[i] = s[i]) != '\0')
        ++i;

    --i; /* last character is nil */

    for (k = 0; k <= i ; ++k)
        s[k] = tmp[i-k];

    s[k] = '\0';
}