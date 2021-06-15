#include "Virologist.hpp"

namespace pandemic{


        Virologist&  Virologist::drive(City c){
            Player::drive(c);
            return *this;
        }

        Virologist&  Virologist::fly_direct(City c){
            Player::fly_direct(c);
            return *this;
        }

        Virologist&  Virologist::fly_charter(City c){
            Player::fly_charter(c);
            return *this;
        }

        Virologist&  Virologist::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        Virologist&  Virologist::build(){
            Player::build();
            return *this;
        }

        Virologist&  Virologist::discover_cure(Color c){
            Player::discover_cure(c);
            return *this;
        }

        Virologist&  Virologist::treat(City c){
            if(currentBoard.diseaseNum.at(c) <= 0)
                throw invalid_argument("no need to cure\n");
            if(currentBoard.discoveredCure(currentBoard.getColor(currentCity)) == true)
                currentBoard.diseaseNum.at(currentCity) = 0;
            else
                currentBoard.diseaseNum.at(currentCity)--;
            cardInHand.erase(c);
            return *this;
        }
}