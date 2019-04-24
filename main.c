#include <stdio.h>
#include "foo.h"

int main(void)
{
    puts("This is a shared library test...");
    foo();
    inc();
    inc();
    inc();
    printf("inc = %d\n", inc());
    return 0;
}