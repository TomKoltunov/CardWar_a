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