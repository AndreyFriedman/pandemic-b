#pragma once

#include "Player.hpp"

namespace pandemic{

    class Virologist : public Player{
        public:
        Virologist (Board& b, City c): Player(b,c){}
        using Player::Player;

        Virologist&  drive(City c) override;
        Virologist&  fly_direct(City c) override;
        Virologist&  fly_charter(City c) override;
        Virologist&  fly_shuttle(City c) override;
        Virologist&  build() override;
        Virologist&  discover_cure(Color c) override;
        Virologist&  treat(City c) override;

        string role() override{return "Virologist";}
    };
}