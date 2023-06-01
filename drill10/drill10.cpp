#include <fstream>      
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "Point.hpp"


std::string compare(std::vector <Point>& vector1, std::vector <Point>& vector2) {
    if (vector1.size() != vector2.size()) {
        
        return "\nSomething's wrong!";
    }
    int size = vector1.size();
    for (int i = 0; i < size; i++) {
        if (vector1[i].get_x() != vector2[i].get_x() || vector1[i].get_y() != vector2[i].get_y()) {
           return "\nSomething's wrong!";
        }
    }
    return "\nEverything is ok";

}
int main()
{
    int x, y;
    std::vector <Point> original_points;
    std::cout << "Input seven cordinates x, y:\n ";
    for (int i = 0; i < 7; i++) {
        
        std::cin >> x >> y;
        
        original_points.push_back(Point(x, y));
    }
    std::cout << "\n\nOriginal points:\n";
    for (auto& p : original_points) {
        std::cout << p.get_x() << " " << p.get_y() << "\n";
    }

    std::ofstream ofs("mydata.txt", std::ofstream::out);

    for (auto& p : original_points) {
        ofs << p.get_x() << " " << p.get_y() << "\n";
    }
    ofs.close();

    std::ifstream ifs("mydata.txt");
    std::vector <Point> processed_points;
    std::string line;
    while (std::getline(ifs, line))
    {
        std::istringstream iss(line);
        int a, b;
        if (!(iss >> a >> b)) { break; } 

        processed_points.push_back(Point(a, b));
    }
    ifs.close();
    std::cout << "\n\nProcessed points:\n";
    for (auto& p : processed_points) {
        std::cout << p.get_x() << " " << p.get_y() << "\n";
    }
    std::cout << "\n\nOriginal points after process:\n";
    for (auto& p : original_points) {
        std::cout << p.get_x() << " " << p.get_y() << "\n";
    }
    

    std::cout << compare(original_points, processed_points);
}

