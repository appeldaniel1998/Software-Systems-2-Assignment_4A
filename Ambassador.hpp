#include "Player.hpp"
#include "Game.hpp"

namespace coup
{
    class Ambassador: public Player
    {
        public:
            Ambassador(Game &game, std::string name);
            void transfer(Player &fromPlayer, Player &toPlayer);
            void block(Player &player);
    };
};