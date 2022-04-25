#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

namespace coup
{
class Game
{
private:
    vector<string> playersList ;
public:
    Game(/* args */);
    vector<string> players();
    string turn();
    string winner();
    ~Game();
};

// Game::Game(/* args */)
// {
// }

// Game::~Game()
// {
// }
} // namespace coup
