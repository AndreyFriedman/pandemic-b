#include "Scientist.hpp"

namespace pandemic{
    
        Scientist&  Scientist::drive(City c){
            Player::drive(c);
            return *this;
        }

        Scientist&  Scientist::fly_direct(City c){
            Player::fly_direct(c);
            return *this;
        }

        Scientist&  Scientist::fly_charter(City c){
            Player::fly_charter(c);
            return *this;
        }

        Scientist&  Scientist::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        Scientist&  Scientist::build(){
            Player::build();
            return *this;
        }

        Scientist&  Scientist::discover_cure(Color c){
            Player::discover_helper(c,number);
            return *this;
        }

        Scientist&  Scientist::treat(City c){
            Player::treat(c);
            return *this;
        }
}