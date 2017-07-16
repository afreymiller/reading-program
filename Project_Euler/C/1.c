#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int multiples_of_3_or_5_lt(int n)
{
    int count, i;

    count = 0;

    for(i = 0; i < n; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            count += i;
        }
    }

    return count;
}

int main()
{
    int j = multiples_of_3_or_5_below(1000);
    printf("%d\n", j);
    return 0;
}