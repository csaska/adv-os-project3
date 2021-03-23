#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int *pointer = 0x0;
    printf(1, "XV6_TEST_OUTPUT, value of null pointer is %d\n", *pointer);
    exit();
}
