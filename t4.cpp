#include <iostream>

double add(double x, double y) {
    return x + y;
}
double sub(double x, double y) {
    return x - y;
}
double mul(double x, double y) {
    return x * y;
}
double div(double x, double y) {
    return x / y;
}

int main() {
    double x, y;
    std::cout << "Enter the first num: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the second num: " << std::endl;
    std::cin >> y;
    std::cout << add(x, y) << std::endl;
    std::cout << sub(x, y) << std::endl;
    std::cout << mul(x, y) << std::endl;
    std::cout << div(x, y) << std::endl;
}