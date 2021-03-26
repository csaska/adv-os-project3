#include "types.h"
#include "user.h"

int *p;

// test that process is trapped and killed when trying to write protected page
int
main(int argc, char *argv[])
{
    p = (int *) sbrk(1);
    mprotect((void*)p, 1);
    *p = 100;
    printf(1, "XV6_TEST_OUTPUT, this should not be printed! %d\n", *p);
    exit();
}
