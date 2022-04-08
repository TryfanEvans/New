#include <iostream>
#include "meerkat.h"

int main()
{
    meerkat bobby;
    meerkat darling;
    meerkat katrina;
    meerkat dave;

    bobby.setAge(10);
    darling.setAge(10);
    katrina.setAge(10);
    dave.setAge(10);

    bobby.setName("bobby");
    darling.setName("bobby");
    katrina.setName("bobby");
    dave.setName("bobby");

    std::cout << bobby.getAge() << std::endl;
    return 0;
}