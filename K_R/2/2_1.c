#include <stdio.h>
#include <limits.h>

void print_max_and_min(){
    unsigned int a = -1;
    printf("The value of the (signed) MIN INT is: %d\n", INT_MIN);
    printf("The value of the (signed) MAX INT is: %d\n", INT_MAX);
    printf("The value of the (unsigned) MIN INT is %u\n", a);
    printf("The value of the (unsigned) MAX INT is %u\n", INT_MAX);
}

int main(){
    print_max_and_min();
};