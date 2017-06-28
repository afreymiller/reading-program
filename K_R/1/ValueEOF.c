
#include <stdio.h>

int main()
{
    int c;

    c = (getchar() != EOF);
    printf("Value of c: %d\n", c);
    return 0;
}