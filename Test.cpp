#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace doctest;
using namespace std;
using namespace ariel;

TEST_CASE("")
{
    Player p1("Tom");
    Player p2("Ben");
    Game game(p1, p2);
    CHECK_NOTHROW(game.printLastTurn()); // check the "printLastTurn()" function
    CHECK_NOTHROW(game.playTurn()); // check the "playTurn()" function
    CHECK_THROWS(p1.cardesTaken()); // check the "cardesTaken()" function
    CHECK_THROWS(p1.stacksize()); // check the "stacksize()" function
    CHECK_NOTHROW(game.playAll()); // check the "playAll()" function
    CHECK_NOTHROW(game.printWiner()); // check the "printWiner()" function
    CHECK_THROWS(p2.cardesTaken()); // check the "cardesTaken()" function
    CHECK_THROWS(p2.stacksize()); // check the "stacksize()" function
    CHECK_NOTHROW(game.printLog()); // check the "printLog()" function
    CHECK_NOTHROW(game.printStats()); // check the "printStats()" function
    CHECK_NOTHROW(game.printLastTurn()); // check the "printLastTurn()" function
    CHECK_NOTHROW(game.playTurn()); // check the "playTurn()" function
    CHECK_THROWS(p1.cardesTaken()); // check the "cardesTaken()" function
    CHECK_THROWS(p1.stacksize()); // check the "stacksize()" function
    CHECK_NOTHROW(game.playAll()); // check the "playAll()" function
    CHECK_NOTHROW(game.printWiner()); // check the "printWiner()" function
    CHECK_THROWS(p2.cardesTaken()); // check the "cardesTaken()" function
    CHECK_THROWS(p2.stacksize()); // check the "stacksize()" function
    CHECK_NOTHROW(game.printLog()); // check the "printLog()" function
    CHECK_NOTHROW(game.printStats()); // check the "printStats()" function
}