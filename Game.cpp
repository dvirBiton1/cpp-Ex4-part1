#include "Game.hpp"
namespace coup{
    vector<string> Game::players()
    {
        for (unsigned int i = 0; i < this->playersList.size(); i++)
        {
            cout << playersList[i]<< endl;
        }
        return playersList;
    }
    string Game::turn()
    {
        return this->playersList[this->i++];
    }
    string Game::winner()
    {
        return this->playersList[this->i++];
    }
    Game::Game(/* args */)
    {
        this->i = 0;
    }

    Game::~Game()
    {
    }
}