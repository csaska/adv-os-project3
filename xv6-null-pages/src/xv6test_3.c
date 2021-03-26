#include "types.h"
#include "user.h"

int *p;

// test that process can write to page after calling protect and then unprotect
int
main(int argc, char *argv[])
{
    p = (int *) sbrk(1);
    mprotect((void*)p, 1);
    munprotect((void*)p, 1);
    *p = 100;
    printf(1, "XV6_TEST_OUTPUT, the value at p is! %d\n", *p);
    exit();
}
