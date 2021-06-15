#pragma once

#include "Player.hpp"

namespace pandemic{

    class Researcher : public Player{
        public:
        Researcher (Board& b, City c): Player(b,c){}
        using Player::Player;

        Researcher&  drive(City c) override;
        Researcher&  fly_direct(City c) override;
        Researcher&  fly_charter(City c) override;
        Researcher&  fly_shuttle(City c) override;
        Researcher&  build() override;
        Researcher&  discover_cure(Color c) override;
        Researcher&  treat(City c) override;

        string role() override{return "Researcher";}
    };
}