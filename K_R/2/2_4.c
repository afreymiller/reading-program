#include <stdio.h>

void squeeze(char s1[], char s2[]);

main()
{
    char s[20] = "abcddefase";
    char t[20] = "abc";

    squeeze(s, t);

    printf("%s\n", s);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k, ADD_FLAG;

    for (i = k = 0; s1[i] != '\0'; i++)
    {
        ADD_FLAG = 1;
        for (j = 0; s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j])
            {
                ADD_FLAG = 0;
                break;
            }
        }
        if (ADD_FLAG == 1){
            s1[k++] = s1[i];
        }
    }
}