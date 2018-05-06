#include <stdio.h>

void function1(int, int, int, int);
void function0(int, int, int);

int
main(int ac, char* av[])
{
    function0(1, 2, 3);

    printf("Hello World %d\n", 10);
}

void
function0(int arg1, int arg2, int arg3)
{
    function1(arg1, arg2, arg3, 4);
}

void
function1(int arg1, int arg2, int arg3, int arg4)
{
    char* bad_ptr = (char*)0;

    // this will crash

    *bad_ptr = 1;
}

