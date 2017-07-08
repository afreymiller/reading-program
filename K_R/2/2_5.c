#include <stdio.h>

int any(char s1[], char s2[]);

main()
{
    char s1[20] = "abcddefase";
    char s2[20] = "xxxxg";

    int output = any(s1, s2);

    printf("%d\n", output);
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;

    for(i = 0; s2[i] != '\0'; i++)
    {
        for(j = 0; s1[j] != '\0'; j++)
        {
            if(s1[j] == s2[i])
            {
                return i;
            }
        }
    }

    return -1;
}