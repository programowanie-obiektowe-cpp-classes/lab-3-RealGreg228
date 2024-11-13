#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    if (towar=0){ return 0; }
    unsigned int trans_towar;
    unsigned int count;
    
    Stocznia stocznia{};

    while(trans_towar < towar){
        Statek* statek = stocznia();
        unsigned int capacity = statek->transportuj();
        trans_towar += capacity;
        delete statek;

        if(dynamic_cast<Zaglowiec*>(statek)){ count++; }
    }

    return count;
}