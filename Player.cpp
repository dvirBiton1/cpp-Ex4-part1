#include "Player.hpp"
#include "Game.hpp"

namespace coup{

    void Player::income(){
        this->money++;
    }
    void Player::foreign_aid(){
        this->money += 2;
    }
    void Player::coup(Player p){
        cout << "coup\n";
    }
    void Player::role(){
        cout << this->name;
    }
    int Player::coins(){
        return 1;
    }
    Player::Player(Game &game, string name)
    {
        // game.addPlayer(this);
        this->name = name;
        this->game = &game;
        this->game->playersList.push_back(this->name);
        this->money = 0;
        
    }
    Player::~Player()
    {
    }
}