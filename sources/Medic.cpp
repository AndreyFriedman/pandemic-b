#include "Medic.hpp"

namespace pandemic{

        Medic&  Medic::drive(City c){
            Player::drive(c);
            heal(c);
            return *this;
        }

        Medic&  Medic::fly_direct(City c){
            Player::fly_direct(c);
            heal(c);
            return *this;
        }

        Medic&  Medic::fly_charter(City c){
            Player::fly_charter(c);
            heal(c);
            return *this;
        }

        Medic&  Medic::fly_shuttle(City c){
            Player::fly_shuttle(c);
            heal(c);
            return *this;
        }

        Medic&  Medic::build(){
            Player::build();
            return *this;
        }

        Medic&  Medic::discover_cure(Color c){
            Player::discover_cure(c);
            return *this;
        }

        Medic&  Medic::treat(City c){
            Player::treat(c);
            currentBoard.diseaseNum.at(c) = 0;
            return *this;
        }

        void Medic::heal(City c){
            if (currentBoard.discoveredCure(currentBoard.getColor(c)) == true)
                currentBoard.diseaseNum.at(c) = 0;
        }

    
}