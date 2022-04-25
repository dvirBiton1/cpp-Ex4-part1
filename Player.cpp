#include "Player.hpp"

namespace coup{

    void Player::income(){
        this->money++;
    }
    void Player::foreign_aid(){
        this->money += 2;
    }
    void Player::coup(Player p){
        cout << "nenenen\n";
    }
    void Player::role(){
        cout << this->name;
    }
    int Player::coins(){
        return this->money;
    }
    Player::Player(Game &game, string name)
    {
        this->game = game;
        this->name = name;
        this->game.playersList.push_back(this->name);
        this->money = 0;
    }
    Player::~Player()
    {
    }
}