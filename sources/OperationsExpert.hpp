#pragma once

#include "Player.hpp"

namespace pandemic{

    class OperationsExpert : public Player{
        public:
        OperationsExpert (Board& b, City c): Player(b,c){}
        using Player::Player;

        OperationsExpert&  drive(City c) override;
        OperationsExpert&  fly_direct(City c) override;
        OperationsExpert&  fly_charter(City c) override;
        OperationsExpert&  fly_shuttle(City c) override;
        OperationsExpert&  build() override;
        OperationsExpert&  discover_cure(Color c) override;
        OperationsExpert&  treat(City c) override;

        string role() override{return "OperationsExpert";}
    };
}