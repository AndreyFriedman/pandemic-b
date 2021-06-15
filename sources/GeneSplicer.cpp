#include "GeneSplicer.hpp"

namespace pandemic{

        GeneSplicer&  GeneSplicer::drive(City c){
            Player::drive(c);
            return *this;
        }

        GeneSplicer&  GeneSplicer::fly_direct(City c){
            Player::fly_direct(c);
            return *this;
        }

        GeneSplicer&  GeneSplicer::fly_charter(City c){
            Player::fly_charter(c);
            return *this;
        }

        GeneSplicer&  GeneSplicer::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        GeneSplicer&  GeneSplicer::build(){
            Player::build();
            return *this;
        }

        GeneSplicer&  GeneSplicer::discover_cure(Color c){
            if(currentBoard.buildedStation(currentCity) == true && currentBoard.discoveredCure(c) == false){
                if(cardInHand.size() < 5)
                    throw invalid_argument("you dont have enough cards\n");
                for (const auto& card : cardInHand){
                    cardInHand.erase(card);
                }                
            }
            if(currentBoard.buildedStation(currentCity) == false)
                throw invalid_argument("no research station in this city\n");
            return *this;
        }

        GeneSplicer&  GeneSplicer::treat(City c){
            Player::treat(c);
            return *this;
        }
}