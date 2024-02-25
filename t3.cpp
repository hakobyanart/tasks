#include <iostream>


int main() {
    std::cout << "Enter your score: " << std::endl;
    int score = 0;
    std::cin >> score;
    if(score <= 0) {
        std::cout << "Entered an invalid input!" << std::endl;
        return -1;
    }
    switch(score) {
        case 40 ... 50:
        std::cout << "Your grade is F" << std::endl;
        break;
        case 51 ... 59:
        std::cout << "Your grade is E" << std::endl;
        break; 
        case 60 ... 69:
        std::cout << "Your grade is D" << std::endl;
        break;
        case 70 ... 79:
        std::cout << "Your grade is C" << std::endl;
        break;
        case 80 ... 89:
        std::cout << "Your grade is B" << std::endl;
        break;
        case 90 ... 100:
        std::cout << "Your grade is A" << std::endl;
        break;
        default:
        std::cout << "Entered a value that is not in range [40 - 100]" << std::endl;
        return -1;
    }
    for(int i = 1; i <= 10; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}