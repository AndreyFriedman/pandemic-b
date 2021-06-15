#include "Dispatcher.hpp"

namespace pandemic{

        Dispatcher&  Dispatcher::drive(City c){
            Player::drive(c);
            return *this;
        }

        Dispatcher&  Dispatcher::fly_direct(City c){
            if(currentCity == c)
                throw invalid_argument("cant fly to city you already stand in\n");
            if(currentBoard.buildedStation(currentCity) == true)
                currentCity = c;
            else
                Player::fly_direct(c);
            return *this;
        }

        Dispatcher&  Dispatcher::fly_charter(City c){
            
            return *this;
        }

        Dispatcher&  Dispatcher::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        Dispatcher&  Dispatcher::build(){
            Player::build();
            return *this;
        }

        Dispatcher&  Dispatcher::discover_cure(Color c){
            Player::discover_cure(c);
            return *this;
        }

        Dispatcher&  Dispatcher::treat(City c){
            Player::treat(c);
            return *this;
        }
}