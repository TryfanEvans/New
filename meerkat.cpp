#include <iostream>
#include "meerkat.h"
using namespace std;

meerkat::meerkat()
{

} // no name or age is required to create a meerkat
void meerkat::setName(std::string meerName)
{
    name = meername;
} // change the meerkat's name
string meerkat::getName()
{
    return name;
}
void meerkat::setAge(int meerAge)
{
    age = meerAge;
} // change the meerkat's age
int meerkat::getAge()
{
    return age;
}
