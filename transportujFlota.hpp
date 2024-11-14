#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    if (towar == 0){
        return 0;
    }
    unsigned int trans = 0;
    unsigned int count = 0;
    Stocznia stocznia;

    while (trans < towar) {
        Statek* statek = stocznia();
        unsigned int amount = statek->transportuj();
        trans += amount;

        // SprawdŸ, czy statek jest typu Zaglowiec
        if (dynamic_cast< Zaglowiec* >(statek) != nullptr) {
            count++;
        }

        delete statek; // Usuñ dynamicznie utworzony statek
    }

    return count;
}