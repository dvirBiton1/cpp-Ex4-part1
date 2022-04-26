#include "Game.hpp"
namespace coup{
    vector<string> Game::players()
    {
        vector<string> stam ={"stam1","stam2"};
        return this->playersList;
    }
    string Game::turn()
    {
        if (this->playersList.size() == 0)
        {
            throw runtime_error("their is no players in this game");
        }
        return "turn";
    }
    string Game::winner()
    {
        if (this->playersList.size() != 1)
        {
            throw runtime_error("their is no players in this game");
        }
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