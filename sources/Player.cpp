#include <string>
#include <iostream>

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{

        Player&  Player::drive(City c){
            if(currentBoard.connection(currentCity,c) == false)
                throw invalid_argument("cant drive to unconnected city\n");
            currentCity = c;
            return *this;
        }




        Player&  Player::fly_direct(City c){
            if(currentCity == c)
                throw invalid_argument("cant fly to city you already stand in\n");
            if(cardInHand.find(c) == cardInHand.end())
                throw invalid_argument("you dont have the card of this city\n");
            cardInHand.erase(c);
            currentCity = c;
            return *this;
        }




        Player&  Player::fly_charter(City c){
            if(currentCity == c)
                throw invalid_argument("cant fly to city you already stand in\n");
            if(cardInHand.find(currentCity) == cardInHand.end())
                throw invalid_argument("you dont have the card of this city\n");
            cardInHand.erase(currentCity);
            currentCity = c;
            return *this;
        }




        Player&  Player::fly_shuttle(City c){
            if(currentCity == c)
                throw invalid_argument("cant fly to city you already stand in\n");
            
            if(currentBoard.buildedStation(currentCity) == false || currentBoard.buildedStation(c) == false)
                throw invalid_argument("the city doesnt have a research station\n");
            
            currentCity = c;
            
            return *this;
        }




        Player&  Player::build(){
            if(currentBoard.station.at(currentCity) == false){
                if(cardInHand.find(currentCity) == cardInHand.end())
                    throw invalid_argument("you dont have the card of this city\n");
                currentBoard.createStation(currentCity);
                cardInHand.erase(currentCity);
            }
            return *this;
        }




        Player&  Player::discover_cure(Color c){
            return discover_helper(c,5);
        }




        Player&  Player::treat(City c){
            if(currentCity != c)
                throw invalid_argument("curing not the right city\n");
            if(currentBoard.diseaseNum.at(c) <= 0)
                throw invalid_argument("no need to cure\n");
            if(currentBoard.discoveredCure(currentBoard.getColor(currentCity)) == true)
                currentBoard.diseaseNum.at(currentCity) = 0;
            else
                currentBoard.diseaseNum.at(currentCity)--;
            cardInHand.erase(c);
            return *this;
        }
        Player& Player::take_card(City c){ 
                cardInHand.insert(c);
            return *(this);
        }




        Player& Player::discover_helper(Color c ,int numOfCard){
            if(currentBoard.buildedStation(currentCity) == true && currentBoard.discoveredCure(c) == false){
                int goodCards = 0;
                for(const auto& card : cardInHand){
                    if(currentBoard.getColor(card) == c)
                    goodCards++;
                }
                if(goodCards < numOfCard)
                    throw invalid_argument("you dont have enough cards\n");
                for (const auto& card : cardInHand){
                    if(currentBoard.getColor(card) == c)
                    cardInHand.erase(card);
                }                
            }
            if(currentBoard.buildedStation(currentCity) == false)
                throw invalid_argument("no research station in this city\n");
            return *this;
        }
        
    
}