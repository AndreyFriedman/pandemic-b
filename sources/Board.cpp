#include "Board.hpp"

#include <ostream>
#include <algorithm>
#include <fstream>


namespace pandemic{

    Board::Board(){    
    
    cityInfo[Algiers] = {Black, {Madrid, Paris, Istanbul, Cairo}};
    cityInfo[Atlanta] = {Blue, {Chicago, Miami, Washington}};
    cityInfo[Baghdad] = {Black, {Tehran, Istanbul, Cairo, Riyadh, Karachi}};
    cityInfo[Bangkok] = {Red, {Kolkata, Chennai, Jakarta, HoChiMinhCity, HongKong}};
    cityInfo[Beijing] = {Red, {Shanghai, Seoul}};
    cityInfo[Bogota] = {Yellow, {MexicoCity, Lima, Miami, SaoPaulo, BuenosAires}};
    cityInfo[BuenosAires] = {Yellow,{Bogota, SaoPaulo}};
    cityInfo[Cairo] = {Black, {Algiers, Istanbul, Baghdad, Khartoum, Riyadh}};
    cityInfo[Chennai] = {Black, {Mumbai, Delhi, Kolkata, Bangkok, Jakarta}};
    cityInfo[Chicago] = {Blue, {SanFrancisco, LosAngeles, MexicoCity, Atlanta, Montreal}};
    cityInfo[Delhi] = {Black, {Tehran, Karachi, Mumbai, Chennai, Kolkata}};
    cityInfo[Essen] = {Blue, {London, Paris, Milan, StPetersburg}};
    cityInfo[HoChiMinhCity] = {Red, {Jakarta, Bangkok, HongKong, Manila}};
    cityInfo[HongKong] = {Red, {Bangkok, Kolkata, HoChiMinhCity, Shanghai, Manila, Taipei}};
    cityInfo[Istanbul] = {Black, {Milan, Algiers, StPetersburg, Cairo, Baghdad, Moscow}};
    cityInfo[Jakarta] = {Red, {Chennai, Bangkok, HoChiMinhCity, Sydney}};
    cityInfo[Johannesburg] = {Yellow, {Kinshasa, Khartoum}};
    cityInfo[Karachi] = {Black, {Tehran, Baghdad, Riyadh, Mumbai, Delhi}};
    cityInfo[Khartoum] = {Yellow, {Cairo, Lagos, Kinshasa, Johannesburg}};
    cityInfo[Kinshasa] = {Yellow, {Lagos, Khartoum, Johannesburg}};
    cityInfo[Kolkata] = {Black, {Delhi, Chennai, Bangkok, HongKong}};
    cityInfo[Lagos] = {Yellow, {SaoPaulo, Khartoum, Kinshasa}};
    cityInfo[Lima] = {Yellow, {MexicoCity, Bogota, Santiago}};
    cityInfo[London] = {Blue, {NewYork, Madrid, Essen, Paris}};
    cityInfo[LosAngeles] = {Yellow, {SanFrancisco, Chicago, MexicoCity, Sydney}};
    cityInfo[Madrid] = {Blue, {London, NewYork, Paris, SaoPaulo, Algiers}};
    cityInfo[Manila] = {Red, {Taipei, SanFrancisco, HoChiMinhCity, Sydney, HongKong}};
    cityInfo[MexicoCity] = {Yellow, {LosAngeles, Chicago, Miami, Lima, Bogota}};
    cityInfo[Miami] = {Yellow, {Atlanta, MexicoCity, Washington, Bogota}};
    cityInfo[Milan] = {Blue, {Essen, Paris, Istanbul}};
    cityInfo[Montreal] = {Blue, {Chicago, Washington, NewYork}};
    cityInfo[Moscow] = {Black, {StPetersburg, Istanbul, Tehran}};
    cityInfo[Mumbai] = {Black, {Karachi, Delhi, Chennai}};
    cityInfo[NewYork] = {Blue, {Montreal, Washington, London, Madrid}};
    cityInfo[Osaka] = {Red, {Taipei, Tokyo}};
    cityInfo[Paris] = {Blue, {Algiers, Essen, Madrid, Milan, London}};
    cityInfo[Riyadh] = {Black, {Baghdad, Cairo, Karachi}};
    cityInfo[SanFrancisco] = {Blue, {LosAngeles, Chicago, Tokyo, Manila}};
    cityInfo[Santiago] = {Yellow, {Lima}};
    cityInfo[SaoPaulo] = {Yellow, {Bogota, BuenosAires, Lagos, Madrid}};
    cityInfo[Seoul] = {Red, {Beijing ,Shanghai, Tokyo}};
    cityInfo[Shanghai] = {Red, {Beijing, HongKong, Taipei, Seoul, Tokyo}};
    cityInfo[StPetersburg] = {Blue, {Essen, Istanbul, Moscow}};
    cityInfo[Sydney] = {Red, {Jakarta, Manila, LosAngeles}};
    cityInfo[Taipei] = {Red, {Shanghai, HongKong, Osaka, Manila}};
    cityInfo[Tehran] = {Black, {Baghdad, Moscow, Karachi, Delhi}};
    cityInfo[Tokyo] = {Red, {Seoul, Shanghai, Osaka, SanFrancisco}};
    cityInfo[Washington] = {Blue, {Atlanta, NewYork ,Montreal, Miami}};


    station[Algiers] = false;
    station[Atlanta] = false;
    station[Baghdad] = false;
    station[Bangkok] = false;
    station[Beijing] = false;
    station[Bogota] = false;
    station[BuenosAires] = false;
    station[Cairo] = false;
    station[Chennai] = false;
    station[Chicago] = false;
    station[Delhi] = false;
    station[Essen] = false;
    station[HoChiMinhCity] = false;
    station[HongKong] = false;
    station[Istanbul] = false;
    station[Jakarta] = false;
    station[Johannesburg] = false;
    station[Karachi] = false;
    station[Khartoum] = false;
    station[Kinshasa] = false;
    station[Kolkata] = false;
    station[Lagos] = false;
    station[Lima] = false;
    station[London] = false;
    station[LosAngeles] = false;
    station[Madrid] = false;
    station[Manila] = false;
    station[MexicoCity] = false;
    station[Miami] = false;
    station[Milan] = false;
    station[Montreal] = false;
    station[Moscow] = false;
    station[Mumbai] = false;
    station[NewYork] = false;
    station[Osaka] = false;
    station[Paris] = false;
    station[Riyadh] = false;
    station[SanFrancisco] = false;
    station[Santiago] = false;
    station[SaoPaulo] = false;
    station[Seoul] = false;
    station[Shanghai] = false;
    station[StPetersburg] = false;
    station[Sydney] = false;
    station[Taipei] = false;
    station[Tehran] = false;
    station[Tokyo] = false;
    station[Washington] = false;

    diseaseNum[Algiers] = 0;
    diseaseNum[Atlanta] = 0;
    diseaseNum[Baghdad] = 0;
    diseaseNum[Bangkok] = 0;
    diseaseNum[Beijing] = 0;
    diseaseNum[Bogota] = 0;
    diseaseNum[BuenosAires] = 0;
    diseaseNum[Cairo] = 0;
    diseaseNum[Chennai] = 0;
    diseaseNum[Chicago] = 0;
    diseaseNum[Delhi] = 0;
    diseaseNum[Essen] = 0;
    diseaseNum[HoChiMinhCity] = 0;
    diseaseNum[HongKong] = 0;
    diseaseNum[Istanbul] = 0;
    diseaseNum[Jakarta] = 0;
    diseaseNum[Johannesburg] = 0;
    diseaseNum[Karachi] = 0;
    diseaseNum[Khartoum] = 0;
    diseaseNum[Kinshasa] = 0;
    diseaseNum[Kolkata] = 0;
    diseaseNum[Lagos] = 0;
    diseaseNum[Lima] = 0;
    diseaseNum[London] = 0;
    diseaseNum[LosAngeles] = 0;
    diseaseNum[Madrid] = 0;
    diseaseNum[Manila] = 0;
    diseaseNum[MexicoCity] = 0;
    diseaseNum[Miami] = 0;
    diseaseNum[Milan] = 0;
    diseaseNum[Montreal] = 0;
    diseaseNum[Moscow] = 0;
    diseaseNum[Mumbai] = 0;
    diseaseNum[NewYork] = 0;
    diseaseNum[Osaka] = 0;
    diseaseNum[Paris] = 0;
    diseaseNum[Riyadh] = 0;
    diseaseNum[SanFrancisco] = 0;
    diseaseNum[Santiago] = 0;
    diseaseNum[SaoPaulo] = 0;
    diseaseNum[Seoul] = 0;
    diseaseNum[Shanghai] = 0;
    diseaseNum[StPetersburg] = 0;
    diseaseNum[Sydney] = 0;
    diseaseNum[Taipei] = 0;
    diseaseNum[Tehran] = 0;
    diseaseNum[Tokyo] = 0;
    diseaseNum[Washington] = 0;



    cures[Black] = false;
    cures[Blue] = false;
    cures[Red] = false;
    cures[Yellow] = false;

    };

        int& Board::operator [] (City c){
            return this -> diseaseNum[c];
        }
        bool Board::is_clean(){ 
            for (auto diseases : this-> diseaseNum){
                if (diseases.second > 0){
                    return false;
                } 
            }
            return true;
        }
        std::ostream& operator << (std::ostream& os, const Board& b){
            os << "City Information: \n";
            for (auto diseases : b.diseaseNum){     
                os << "[" << diseases.first << ": " << diseases.second << "]\n";
                if(b.station.at(diseases.first) == true)
                    os << "has research station\n";
            }
            for (auto curses : b.cures){ 
                os << curses.first << ", " << curses.second;
            }
            return os;
        }

        void Board::remove_cures(){
            cures.clear();
        }
        void Board::remove_stations(){
            station.clear();
        }


        bool const Board::buildedStation(City c){
            return station.at(c);
        }

        void Board::createStation(City c){
            station.at(c) = true;
        }

        bool const Board::discoveredCure(Color c){
            return cures.at(c);
        }
        void Board::createCure(Color c){
            cures.at(c) = true;
        }
        Color const Board::getColor(City c){
            return cityInfo.at(c).first;
        }
        bool const Board::connection(City ca, City cb){
            return cityInfo.at(ca).second.find(cb) != cityInfo.at(ca).second.end();
        }

}