#pragma once

#include "Player.hpp"

namespace pandemic{

    class FieldDoctor : public Player{
        public:
        FieldDoctor (Board& b, City c): Player(b,c){}
        using Player::Player;

        FieldDoctor&  drive(City c) override;
        FieldDoctor&  fly_direct(City c) override;
        FieldDoctor&  fly_charter(City c) override;
        FieldDoctor&  fly_shuttle(City c) override;
        FieldDoctor&  build() override;
        FieldDoctor&  discover_cure(Color c) override;
        FieldDoctor&  treat(City c) override;

        string role() override{return "FieldDoctor";}
    };
}