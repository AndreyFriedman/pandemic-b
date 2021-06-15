#include "FieldDoctor.hpp"

namespace pandemic{

            FieldDoctor&  FieldDoctor::drive(City c){
            Player::drive(c);
            return *this;
        }

        FieldDoctor&  FieldDoctor::fly_direct(City c){
            Player::fly_direct(c);
            return *this;
        }

        FieldDoctor&  FieldDoctor::fly_charter(City c){
            Player::fly_charter(c);
            return *this;
        }

        FieldDoctor&  FieldDoctor::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        FieldDoctor&  FieldDoctor::build(){
            Player::build();
            return *this;
        }

        FieldDoctor&  FieldDoctor::discover_cure(Color c){
            Player::discover_cure(c);
            return *this;
        }

        FieldDoctor&  FieldDoctor::treat(City c){
            if (Player::currentBoard.connection(currentCity,c) == true)
            {
                if(currentBoard.diseaseNum.at(c) <= 0)
                    throw invalid_argument("no need to cure\n");
                if (currentBoard.discoveredCure(currentBoard.getColor(currentCity)) == true)
                    currentBoard.diseaseNum.at(currentCity) = 0;
                else
                    currentBoard.diseaseNum.at(currentCity)--;  
            } 
            else
                throw invalid_argument("curing not the right city\n");
            return *this;
        }
}