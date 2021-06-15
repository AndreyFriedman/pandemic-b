#pragma once

#include "Player.hpp"

namespace pandemic{

    class GeneSplicer : public Player{
        public:
        GeneSplicer (Board& b, City c): Player(b,c){}
        using Player::Player;
        
        GeneSplicer&  drive(City c) override;
        GeneSplicer&  fly_direct(City c) override;
        GeneSplicer&  fly_charter(City c) override;
        GeneSplicer&  fly_shuttle(City c) override;
        GeneSplicer&  build() override;
        GeneSplicer&  discover_cure(Color c) override;
        GeneSplicer&  treat(City c) override;

        string role() override{return "GeneSplicer";}
    };
}