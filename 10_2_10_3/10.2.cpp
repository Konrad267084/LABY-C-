#include <iostream>
#include <vector>
#include <fstream>
#include "Readings.hpp"


int main()
{
    srand(time(NULL));
    
   
    const long max_rand = 100L;

    double lower_bound = 55;
    double upper_bound = 70;

    std::vector<Reading> temps;
    
    int hour = 0;
    for (int i = 0; i < 50; i++) {
        double random_double = lower_bound
        + (upper_bound - lower_bound)
        * (rand() % max_rand)
        / max_rand;
        Reading temp;
        temp.hour = hour % 24;
        temp.temperature = random_double;
        temps.push_back(temp);
        hour++;
    }
    
    std::ofstream ofs("store_temps.txt", std::ofstream::out);
    
    for (auto& t : temps) {
        ofs << t.hour << " " << t.temperature << "\n";
       

    }
    ofs.close();
}

