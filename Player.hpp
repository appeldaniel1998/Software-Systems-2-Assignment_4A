#pragma once
#include<iostream>
namespace coup
{
    class Player
    {
        private:
            int numOfCoins;
            std::string name;
        public:
            Player();
            void income();
            void foreign_aid();
            void coup(Player &player);
            int coins();
            virtual std::string role(); 
    };
};