#pragma once
#include <string>
#include <iostream>
#include <set>

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

using namespace std;

namespace pandemic{

    class Player{
        public:
        Board& currentBoard;
        City currentCity;
        set<City> cardInHand;
        Player( Board& b,City c) : currentBoard(b), currentCity(c){}
        virtual Player&  drive(City c);
        virtual Player&  fly_direct(City c);
        virtual Player&  fly_charter(City c);
        virtual Player&  fly_shuttle(City c);
        virtual Player&  build();
        virtual Player&  discover_cure(Color c);
        virtual Player&  treat(City c);

        virtual std::string role(){return "Player";}

        Player& take_card(City c);

        Player& discover_helper(Color c ,int numOfCard);
    };
};