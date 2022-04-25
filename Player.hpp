
#include "Game.hpp"
using namespace std;
namespace coup{
    class Player
    {
    private:
        string name;
        Game game;
        int money;
    public:
        Player(Game &game, string name){
            this->game = game;
            this->name =name;
            this->money = 0;
        };
        void income();
        void foreign_aid();
        void coup(Player p);
        void role();
        void coins();
        ~Player();
    };
    
    // Player::Player(/* args */)
    // {
    // }
    
    // Player::~Player()
    // {
    // }
    


}