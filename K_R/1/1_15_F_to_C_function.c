#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int convert_F_to_C(fahr){
    return 5 * (fahr - 32)/9;
}

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature scale */
    upper = 300;  /* upper limit */
    step = 20;    /* step size */

    fahr = upper;

    printf("%s\t%s\n", "F", "C");
    printf("%s\t%s\n", "-", "-");

    while (fahr >= lower){
        celsius = convert_F_to_C(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr - step;
    }
}