#include "cart.h"
#include <iostream>

cart::cart()
{
    load = 0;
} // create an empty cart object
bool cart::addMeerkat(meerkat cat)
{
    if (load < 4)
    {
        seats[load] = cat;
        load++;
        return true;
    }
    return false;
} // adds a meerkat to the cart, returns false if full
void cart::emptyCart()
{
    load = 0;
    for (int i = 0; i < 4; i++)
    {
        meerkat cat;
        seats[i] = cat;
    }

} // remove all meerkats from the cart
void cart::printMeerkats()
{
    for (int i = 0; i < 4; i++)
    {
        std::cout << seats[i].getName() << " " << seats[i].getAge() << "\n";
    }
} // print the name, a space, the age, then a new line
  // for each meerkat in the order they were added