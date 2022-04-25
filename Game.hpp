#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
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
        ~Game();
    };
    
} // namespace coup
