
#include "libtest.h"
#include <stdio.h>

const char *
get_returnstring(const char *inputstring)
{
    static char one_shot[1024];
    one_shot[1023] = '\0';
    snprintf(one_shot, 1023, "Hello %s", inputstring);
    return one_shot;
}
