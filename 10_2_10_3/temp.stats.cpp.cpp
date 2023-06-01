#include <iostream>
#include <fstream> 
#include <vector>
#include <string>
#include <sstream>
#include "readings.hpp"

double mean (std::vector<Reading> readings) {
    double sum = 0;
    for (auto& t : readings) {
        sum += t.temperature;
    }
    return sum / readings.size();

}

int main()
{
    std::ifstream ifs("store_temps.txt");
    std::vector <Reading> readings;
    std::string line;
    while (std::getline(ifs, line))
    {
        std::istringstream iss(line);
        Reading temp;


        if (!(iss >> temp.hour >> temp.temperature)) { break; }

        readings.push_back(temp);
    }
    ifs.close();

    
    std::cout << "The average is " << mean(readings)<< "\n";
}
