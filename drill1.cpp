#include <iostream>

int main() {
    std::cout << "Enter the name of the person you want to write to: ";
    std::string name;
    std::cin >> name; 
    std::cout << "Dear, " << name << "\n";
    std::cout << "How are you? I am fine. I miss you." << "\n";
    std::cout << "Enter the name of the friend: ";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "Have you seen " << friend_name << " recently?" << "\n";
    char friend_sex = '0';
    std::cout << "Enter m if the friend is male and f if the friend is female: ";
    std::cin >> friend_sex;
    if (friend_sex == 'm') {
        std::cout << "If you see " << friend_name << " please ask him to call me." << "\n";
    } else if (friend_sex == 'f') {
        std::cout << "If you see " << friend_name << " please ask her to call me." << "\n";
    } else {
        std::cout << "wrong data has been entered" << "\n";
    }
    std::cout << "Enter the age the recipient: ";
    int age;
    std::cin >> age;
    if (age <= 0 || age >= 110) {
        std::cout << "you're kidding" << "\n";
    } else {
        std::cout << "I hear you just had a birthday and you are " << age << " years old" << "\n";
    } if (age > 0 && age <= 12) {
        std::cout << "Next year you will be " << age + 1 << "\n\n\n";
    } else if (age == 17) {
        std:: cout << "Next year you will be able to vote." << "\n\n\n";
    } else if (age >= 70 || age < 110) {
        std::cout << "I hope you are enjoying retirement." << "\n\n\n";
    }
    std::cout << "Yours sincerly";
        
   
        
    return 0;
}

