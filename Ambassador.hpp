#include "Player.hpp"

using namespace std;
namespace coup{
    class Ambassador : public Player
    {
    private:
        string name;
        Game game;
    public:
        Ambassador(Game &game, string name);
        void transfer(Player p1, Player p2);
        ~Ambassador();
    };
    
    
    


}