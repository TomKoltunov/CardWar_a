/**
 * @file player.hpp
 * @author your name (you@domain.com)
 * @brief Headers for 'player' object
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string>

using namespace std;

namespace ariel
{
    class Player
    {
        Player(string name);
        void stacksize(); // Prints the amount of cards left. Should be 21 but can be less if a draw was played
        void cardesTaken(); // Prints the amount of cards this player has won
    }
}