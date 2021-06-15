#pragma once
#include <unordered_map>
#include <unordered_set>
#include <ostream>

#include "City.hpp"
#include "Color.hpp"


namespace pandemic{

    class Board{
        public:
        Board();
        std::unordered_map<City, int> diseaseNum;
        std::unordered_map<Color, bool> cures;
        std::unordered_map<City, bool> station;
        std::unordered_map<City, std::pair<Color, std::unordered_set<City>>> cityInfo;
        
        int& operator [] (City c);
        bool is_clean();
        void remove_cures();
        void remove_stations();
        friend std::ostream& operator << (std::ostream& bap, const Board& b);

        bool const buildedStation(City c);
        void createStation(City c);
        bool const discoveredCure(Color c);
        void createCure(Color c);
        Color const getColor(City c);
        bool const connection(City ca, City cb);
        

    };
}