#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    if (towar=0){ return 0; }
    unsigned int trans_towar = 0;
    unsigned int count = 0;
    
    Stocznia stocznia;

    while(trans_towar < towar){
        Statek* statek = stocznia();
        unsigned int capacity = statek->transportuj();
        trans_towar += capacity;
        
        if(dynamic_cast<Zaglowiec*>(statek) != nullptr){ 
            count++; 
        }
        delete statek;
    }

    return count;
}