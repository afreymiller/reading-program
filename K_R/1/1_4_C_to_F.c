#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -100;    /* lower limit of temperature scale */
    upper = 100;  /* upper limit */
    step = 20;    /* step size */

    celsius = lower;

    printf("%s\t%s\n", "C", "F");
    printf("%s\t%s\n", "-", "-");

    while (celsius <= upper){
        fahr = (9.0 * (celsius)/ 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}