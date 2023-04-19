#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <map>



std::string set_to_lowercase(std::string word) {
    std::locale loc;
    int size = word.size();

    for (int i = 0; i < size; i++)
        word[i] = std::tolower(word[i], loc);
    //std::cout << "\n" << word;
    return word;
}


std::vector<std::vector<int>> create_results() {
    std::vector<std::vector<int>> results;
    for (int i = 0; i < 7; i++) {
        std::vector<int> days;
        results.push_back(days);
    }
    return results;
}

std::vector<std::string> create_correct_words() {
    std::vector<std::string> days = {"mon", "monday", "tue", "tuesday", "wed" ,"wednesday"
        , "thu", "thursday", "fri" ,"friday", "sat", "saturday", "sun", "sunday"
    };
    return days;

}

std::map<std::string, int> days_indexes() {
    
    std::map<std::string, int> days_indexes{{"mon",0}, {"monday",0}, {"tue",1}, {"tuesday",1}, {"wednesday",2}, {"wed",2}, {"thursday", 3},
        {"thu", 3}, {"friday", 4}, {"fri", 4}, {"saturday", 5}, {"sat", 5}, {"sunday", 6}, {"sun", 6}};

    return days_indexes;
}

int get_index(std::string day, std::vector<std::string> correct_words, std::map<std::string, int> days_indexes) {

    for (auto& word : correct_words) {
        if (set_to_lowercase(day) == word) {
            return days_indexes[word];
        }
    }
    return -1;
}

int sum(std::vector<int> values) {
    int result = 0;
    for (auto& value : values) {
        result += value;
    }
    return result;
}


int main()
{
    
    std::vector<std::vector<int>> results = create_results();
    std::vector<std::string> correct_words = create_correct_words();
    std::map<std::string, int> indexes = days_indexes();

    std::string day;
    int value, day_index, rejected_values = 0;
    
    while (true) {
        std::cin >> day;
        if (day == "q")
            break;
        std::cin >> value;
        day_index = get_index(day, correct_words, indexes);
        if (day_index == -1) {
            rejected_values++;
            continue;
        }
        results[day_index].push_back(value);
    
    }

    std::vector<std::string> day_of_the_week = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
        "Saturday", "Sunday" };
    for (int i = 0; i < 7; i++) {
        std::cout << "\n" << day_of_the_week[i] << ": ";
        for (auto& value : results[i]) {
            std::cout << value << " ";
        }
        std::cout << " Sum: " << sum(results[i]);
        
    }

    std::cout << "\nNumber of rejected values is: " << rejected_values << "\n";







    return 0;
}

