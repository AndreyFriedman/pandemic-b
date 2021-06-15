#include "Researcher.hpp"

namespace pandemic{

        Researcher&  Researcher::drive(City c){
            Player::drive(c);
            return *this;
        }

        Researcher&  Researcher::fly_direct(City c){
            Player::fly_direct(c);
            return *this;
        }

        Researcher&  Researcher::fly_charter(City c){
            Player::fly_charter(c);
            return *this;
        }

        Researcher&  Researcher::fly_shuttle(City c){
            Player::fly_shuttle(c);
            return *this;
        }

        Researcher&  Researcher::build(){
            Player::build();
            return *this;
        }

        Researcher&  Researcher::discover_cure(Color c){
            if(currentBoard.discoveredCure(c) == false){
                int goodCards = 0;
                for(const auto& card : cardInHand){
                    if(currentBoard.getColor(card) == c)
                    goodCards++;
                }
                if(goodCards < 5)
                    
                    throw invalid_argument("you dont have enough cards\n");
                for (const auto& card : cardInHand){
                    if(currentBoard.getColor(card) == c)
                    cardInHand.erase(card);
                }                
            }
            return *this;
        }

        Researcher&  Researcher::treat(City c){
            Player::treat(c);
            return *this;
        }
}