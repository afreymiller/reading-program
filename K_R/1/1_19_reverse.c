
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[]);

/* print the longest input line */
main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;

    while ((len = getline(line, MAXLINE)) > 0)
    {
        reverse(line);
        copy(line, longest);
        printf("%s\n", longest);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

/* reverse: reverse the characters in a string*/
void reverse(char s[])
{
    int len, i, j;

    for (i = 0; s[i] != '\0'; i++);

    len = i/2;

    for (j = 0; j < len; j++){
        char tmp = s[i-j];
        s[i-j] = s[j];
        s[j] = tmp;
    }

    s[len-i] = '\0';
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
