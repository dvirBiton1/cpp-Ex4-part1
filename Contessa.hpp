// #include "Player.hpp"
using namespace std;
namespace coup{
    class Contessa : public Player
    {
    private:

    public:
        Contessa(Game &game, string name) : Player(game, name){};
        void block(Player p);
        ~Contessa();
    };
    
    // Contessa::Contessa(/* args */)
    // {
    // }
    
    // Contessa::~Contessa()
    // {
    // }
    


}