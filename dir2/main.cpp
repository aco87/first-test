/**
 * @file   main.cpp
 * @author Andreas Conrads (aco@cadsoft.de)
 * @date   Jan, 2016
 * @brief  Initialise cards matches.
 *
 * Initialise and excecute #GAMES card  matches.
 */

#include <iostream>
#include "match.h"

using namespace std;

int main()
{
    bool running = true;
    while(running){
        match firstMatch;
        if(firstMatch.isBlankTen())
            running = false;
    }
    return 0;
}

