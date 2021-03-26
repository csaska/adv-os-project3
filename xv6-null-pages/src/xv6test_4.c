#include "types.h"
#include "user.h"

int *p;

// test that page can still be read after being protected
int
main(int argc, char *argv[])
{
    p = (int *) sbrk(1);
    *p = 100;
    mprotect((void*)p, 1);
    printf(1, "XV6_TEST_OUTPUT, the value at p is! %d\n", *p);
    exit();
}
