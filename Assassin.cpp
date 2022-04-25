#include "Assassin.hpp"
namespace coup{
    Assassin::Assassin(Game &game, string name) : Player(game, name)
    {
    }
    Assassin::~Assassin()
    {
    }
    int Assassin::coins(){
        return 3;
    }
}