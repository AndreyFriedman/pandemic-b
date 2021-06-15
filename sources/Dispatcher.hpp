#pragma once

#include "Player.hpp"

namespace pandemic{

    class Dispatcher : public Player{
        public:
        Dispatcher (Board& b, City c): Player(b,c){}
        using Player::Player;



        Dispatcher&  drive(City c) override;
        Dispatcher&  fly_direct(City c) override;
        Dispatcher&  fly_charter(City c) override;
        Dispatcher&  fly_shuttle(City c) override;
        Dispatcher&  build() override;
        Dispatcher&  discover_cure(Color c) override;
        Dispatcher&  treat(City c) override;

        string role() override{return "Dispatcher";}
    };
}