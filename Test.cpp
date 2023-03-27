#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace doctest;
using namespace std;
using namespace ariel;

TEST_CASE("testtt")
{
    Player p1("Tom");
    Player p2("Ben");
    Game game(p1, p2);

    for (int i = 1; i <= 20; i++)
    {
        CHECK_THROWS(p1.stacksize());
    }
}