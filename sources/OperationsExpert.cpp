#include "OperationsExpert.hpp"

namespace pandemic{

        OperationsExpert&  OperationsExpert::drive(City c){
            Player::drive(c);
            return *this;
        }

        OperationsExpert&  OperationsExpert::fly_direct(City c){
            Player::fly_direct(c);
            return *this;
        }

        OperationsExpert&  OperationsExpert::fly_charter(City c){
            Player::fly_charter(c);
            return *this;
        }

        OperationsExpert&  OperationsExpert::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        OperationsExpert&  OperationsExpert::build(){
            if(currentBoard.station.at(currentCity) == false){
                currentBoard.createStation(currentCity);
                cardInHand.erase(currentCity);
            }
            return *this;
        }

        OperationsExpert&  OperationsExpert::discover_cure(Color c){
            Player::discover_cure(c);
            return *this;
        }

        OperationsExpert&  OperationsExpert::treat(City c){
            Player::treat(c);
            return *this;
        }
}