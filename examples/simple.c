#include <stdio.h>
#include "../include/ctuples.h"

void foo(int* buffer, int size)
{
    while(size--)
    {
        printf("%d\n", *(buffer++));
    }
}

int main(void)
{
    foo(CTUPLE(int, 1, 2, 3));
}
