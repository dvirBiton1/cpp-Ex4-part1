#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
// #include "Player.hpp"
#pragma once
using namespace std;

namespace coup
{
    class Game
    {
    private:
        
    public:
        vector<string> playersList;
        unsigned int i;
        Game(/* args */);
        // {
        //     this->i = 0;
        // };
        vector<string> players();
        string turn();
        string winner();
        // void addPlayer(player p);
        ~Game();
    };
    
} // namespace coup
