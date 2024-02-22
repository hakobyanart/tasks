#include <iostream>
#include <unistd.h>

struct Picture {
        unsigned char red;
        unsigned char green;
        unsigned char blue;
};
void printer(Picture obj[][360], int cordx, int cordy) {
    std::cout << "The red value of promted cordinates is: " << obj[cordx][cordy].red << std::endl;
    std::cout << "The green value of promted cordinates is: " << obj[cordx][cordy].green << std::endl;
    std::cout << "The blue value of promted cordinates is: " << obj[cordx][cordy].blue << std::endl;
} 

int main() {
    Picture mypic[640][360];
    short int red_val;
    short int green_val;
    short int blue_val;
    int x_cord;
    int y_cord;
    std::cout << "Enter the red value from 0 to 255: " << std::endl;
    std::cin >> red_val;
    if(red_val < 0 || red_val > 255) {
        std::cout << "Wrong input! ";
        return -1;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();

    std::cout << "Enter the green value from 0 to 255: " << std::endl;
    std::cin >> green_val;
    if(green_val < 0 || green_val > 255) {
        std::cout << "Wrong input! ";
        return -1;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();

    std::cout << "Enter the blue value from 0 to 255: " << std::endl;
    std::cin >> blue_val;
    if(blue_val < 0 || blue_val > 255) {
        std::cout << "Wrong input! ";
        return -1;
    }
    std::cout << "The pics resolution is 640x360" << std::endl;
    sleep(1);
    std::cout << "Now enter the x cordinate to which you want to put the changes: " << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.clear();

    std::cin >> x_cord;
    if(x_cord < 0 || x_cord > 640) {
        std::cout << "Invalid input! ";
        return -1;
    }
    std::cout << "Enter the y cordinate: " << std::endl;
    std::cin >> y_cord;
    if(y_cord < 0 || y_cord > 360) {
        std::cout << "Invalid input! ";
        return -1;
    }
    mypic[x_cord][y_cord].red = red_val;
    mypic[x_cord][y_cord].green = green_val;
    mypic[x_cord][y_cord].blue = blue_val;
    printer(mypic, x_cord, y_cord);
    
}