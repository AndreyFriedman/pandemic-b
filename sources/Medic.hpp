#pragma once

#include "Player.hpp"

namespace pandemic{

    class Medic : public Player{
        public:
        Medic (Board& b, City c): Player(b,c){}
        using Player::Player;
        

        Medic&  drive(City c) override;
        Medic&  fly_direct(City c) override;
        Medic&  fly_charter(City c) override;
        Medic&  fly_shuttle(City c) override;
        Medic&  build() override;
        Medic&  discover_cure(Color c) override;
        Medic&  treat(City c) override;

        string role() override{return "Medic";}

        void heal(City c);
    };
    
}