#include <iostream>
#include <algorithm>
#include <vector>


double m_to_cm(double number) {
    return number * 100;
}

double in_to_cm(double number) {
    return number * 2.54;
}

double ft_to_cm(double number) {
    return number * 2.54 * 12;
}

double converter(double number, std::string unit) {
    if (unit == "cm") {
        return number;
    }
    if (unit == "m") {
        return m_to_cm(number);
    }
    if (unit == "in") {
        return in_to_cm(number);
    }
    if (unit == "ft") {
        return ft_to_cm(number);
    }
    
}
double converter_m(double number, std::string unit) {
    return converter(number, unit)/100;
}
bool is_illegal_unit(std::string unit) {
    if (unit == "y" || unit == "yard" || unit == "meter" || unit == "km" || unit == "gallons") {
        return true;
    }
    else {
        return false;
    }

}

int main() {
    double number, smallest = INT_MAX, largest = INT_MIN ;
    //char number;  
    bool first = true;
    std::string unit, largest_unit, smallest_unit;
    
    std::vector<double> values;
    
    while (std::cin >> number >> unit)
    {
        if (number == '|' )
        {
            break;
        }

        values.push_back(converter_m(number, unit));

        if (is_illegal_unit(unit)) 
        {
            std::cout << "Wrong unit" << "\n";

        } else if (first) {
            largest = number;
            largest_unit = unit;
            smallest = number;
            smallest_unit = unit;

            std::cout << number << unit << " is the first number" << "\n";
            
            first = false;
         
        } else if (converter(number, unit) >= converter(largest, largest_unit)) {
            largest = number;
            largest_unit = unit;
            
            std::cout << number << unit << " is the largest" << "\n";
            
        } else if (converter(number, unit) <= converter(smallest, smallest_unit)) {
            smallest = number;
            smallest_unit = unit;
           
            std::cout << number << unit << " is the smallest" << "\n";

        } else if (converter(number, unit) > converter(smallest, smallest_unit) && converter(number, unit) < converter(largest, largest_unit)) {
            
            std::cout << number << unit << "\n";
        }
        
    }
    
    std::cout << "Highest value: " << converter_m(largest, largest_unit) << "m" << "\n";
    std::cout << "Lowest value: " << converter_m(smallest, smallest_unit) << "m" << "\n";
    
    std::sort(values.begin(), values.end());
    
    std::cout << "Sorted values: " << "\n";
    
    for (auto& value : values) {
        std::cout << value << " ";
    }
    
    std::cout << "\n";

    return 0;
}