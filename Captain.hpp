#include "Player.hpp"
#include "Game.hpp"
namespace coup
{
    class Captain: public Player
    {
        public:
            Captain(Game &game, std::string name);
            void steal(Player &player);
            void block(Player &player);
    };
};