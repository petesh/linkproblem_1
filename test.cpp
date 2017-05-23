#include "libtest.h"
#include <iostream>
#include <string>

int
main(int argc, char **argv)
{
    std::string returnstring;
    returnstring = get_returnstring("bobby tables");
    std::cout << returnstring << std::endl;
}

