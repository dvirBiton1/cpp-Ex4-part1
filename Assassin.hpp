#include "Player.hpp"

using namespace std;
namespace coup{
    class Assassin : public Player
    {
    private:

    public:
        Assassin(Game &game, string name);
        ~Assassin();
        int coins();
    };

}