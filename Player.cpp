#include "Player.hpp"
#include "Game.hpp"
// #include <string>
// #include <stdexcept>
using namespace std;

namespace coup
{

    void Player::income()
    {
        this->money++;
        this->game->i = (this->game->i + 1) % this->game->playersList.size();
    }
    void Player::foreign_aid()
    {
        // if (this->name.compare(this->game->playersList[this->game->i]))
        //     ;
        // {
        //     throw runtime_error("is not your turn!");
        // }
        this->money += 2;
        this->game->i = (this->game->i + 1) % this->game->playersList.size();
    }
    void Player::coup(Player p)
    {
    for (unsigned int i = 0; i < this->game->playersList.size(); i++)
    {
        if (!p.name.compare(this->game->playersList[i]))
        {
            this->game->playersList.erase(this->game->playersList.begin() + i);
            return;
        }
    }
    throw invalid_argument("this player didn't exsict");
    }
    void Player::role()
    {
        cout << this->name;
    }
    int Player::coins()
    {
        return this->money;
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