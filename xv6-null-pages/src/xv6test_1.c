#include "types.h"
#include "user.h"

// test that accessing a null page results in process being trapped and killed
int
main(int argc, char *argv[])
{
    int *p = 0x0;
    printf(1, "XV6_TEST_OUTPUT, this should not be printed! %d\n", *p);
    exit();
}
