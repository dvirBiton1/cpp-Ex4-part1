// #include "Player.hpp"
// #include "Game.hpp"
using namespace std;
namespace coup{
    class Duke : public Player
    {
    private:
        /* data */
    public:
        Duke(Game &game, string name) : Player(game, name){};
        int coins();
        void block(Player p);
        void tax();
        ~Duke();
    };
    
    // Duke::Duke(/* args */)
    // {
    // }
    
    // Duke::~Duke()
    // {
    // }
    


}