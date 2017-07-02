#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
    int c;
    int continue_bool = (getchar() != EOF);

    while (continue_bool){
        printf("%d\n", continue_bool);
        continue_bool = (getchar() != EOF);
    }
}