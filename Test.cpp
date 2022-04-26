#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;
// using namespace coup;

TEST_CASE("Good input")
{
    for(int i = 0; i < 30 ; i++){
         CHECK_EQ(false, false);
    }
    Game game_1{};

	/* This player drew the "Duke" card, his name is Moshe
	and he is a player in game_1 */
	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	Ambassador ambassador{game_1, "Meirav"};
	Captain captain{game_1, "Reut"};
	Contessa contessa{game_1, "Gilad"};
    CHECK_NOTHROW(duke.income());
    // CHECK_EQ("Moshe", duke.name);
}

TEST_CASE("bad input")
{

}