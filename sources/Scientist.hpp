#pragma once

#include "Player.hpp"

namespace pandemic{

    class Scientist : public Player{
        public:
        int number;
        Scientist (Board& b, City c, int n): Player(b,c), number(n){
            this-> number = n;
        }
        using Player::Player;


        Scientist&  drive(City c) override;
        Scientist&  fly_direct(City c) override;
        Scientist&  fly_charter(City c) override;
        Scientist&  fly_shuttle(City c) override;
        Scientist&  build() override;
        Scientist&  discover_cure(Color c) override;
        Scientist&  treat(City c) override;

        string role() override{return "Scientist";}

    };
}