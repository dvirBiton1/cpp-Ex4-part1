
#include "Game.hpp"
#include <string>
#pragma once
using namespace std;
namespace coup{
    class Player
    {
    private:
        std::string name;
        int money;
    public:
        Game game;
        Player(Game &game, string name);//{
        //     this->game = game;
        //     this->name = name;
        //     this->money = 0;
        // };
        void income();
        void foreign_aid();
        void coup(Player p);
        void role();
        int coins();
        ~Player();
    };
    
}