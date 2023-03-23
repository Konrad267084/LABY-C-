#include <iostream>


int main() {

    double first_number, second_number;
    //char first_number, second_number;

    while (std::cin >> first_number >> second_number)
    {
        
        if (first_number == '|' || second_number == '|') 
        {
            break;
        }
        if (first_number > second_number) 
        {
            std::swap(first_number, second_number);
        }
        
        std::cout << first_number << " " << second_number << "\n";
        
        if (first_number == second_number)
        { 
            std::cout << "The numbers are equal " << "\n"; 
        }

        if (second_number - first_number <= 0.01)
        {
            std::cout << "The numbers are almost equal " << "\n";
        }
            
    }
    std::cout << "\n";
    
    return 0;
}







