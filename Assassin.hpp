// #include "Player.hpp"

using namespace std;
namespace coup{
    class Assassin : public Player
    {
    private:

    public:
        Assassin(Game &game, string name) : Player(game, name){};
        int coins();
        ~Assassin();
    };
    
    // Assassin::Assassin(/* args */)
    // {
    // }
    
    // Assassin::~Assassin()
    // {
    // }
    


}