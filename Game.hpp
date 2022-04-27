#pragma once
#include<iostream>
#include<vector>
#include "Player.hpp"
using namespace coup;
namespace coup
{
    class Game
    {
        private:
            std::vector<Player> playerList;
        public:
            Game();
            std::string turn();
            std::vector<std::string> players();
            std::string winner();
            std::vector<Player> getPlayerList();
            void addPlayer(Player &player);
    };
};