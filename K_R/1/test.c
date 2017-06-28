 
#include <stdio.h>

int main()
{
    int c;

    char arr[20];
    int i = 0;

    /* Ensure that we don't exceed bounds of array */
    while((c != EOF) && (i < 19)){
        arr[i] = c;
        ++i;
        printf("%d\n", i);
        c = getchar();
    }

    arr[20] = '\0';

    char *ptr = arr; 

    //printf("Print first character of arr: %c\n", arr[0]);

    printf("Value of arr: %s\n", ptr); 
    return 0;
}