#include <iostream>
#include <string>
#include <unistd.h>
#define SIZE 5

void arr_init(double* arr) {
    for(int i = 0; i < SIZE; i++) {
        std::cout << "Enter the " << i + 1 << " element of array" << std::endl;
        std::cin >> arr[i];
    }
}
double lowest_val(double* arr) {
    int temp = INT_MAX;
    for(int i = 0; i < SIZE; ++i) {
        if(arr[i] < temp) {
            temp = arr[i];
        }
    }
    return temp;
}
double highest_val(double* arr) {
    int temp = 0;
    for(int i = 0; i < SIZE; ++i) {
        if(arr[i] >= temp) {
            temp = arr[i];
        }
    }
    return temp;
}
double average_arr(double* arr) {
    int temp = 0;
    for(int i = 0; i < SIZE; ++i) {
        temp += arr[i];
    }
    return temp / SIZE; 
}
void str_concate(std::string* str1, std::string* str2) {
    for(int i = 0; i < str2->size(); ++i) {
        str1->push_back((*str2)[i]);
    }
}
int main() {
    double arr[SIZE];
    arr_init(arr);
    std::cout << "The highest value in this array is: " << highest_val(arr) << std::endl;
    std::cout << "The lowest value in this array is: " << lowest_val(arr) << std::endl;
    std::cout << "The average of this array is: " << average_arr(arr) << std::endl;
    std::cout << "Loading the second part of task: " << std::endl;
    sleep(3);
    std::string str1;
    std::cout << "Enter the first string: " << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::getline(std::cin, str1);
    std::string str2;
    std::cout << "Enter the second string: " << std::endl;
    std::getline(std::cin, str2);
    std::cout << "Lenght of first string is: " << str1.length() << std::endl;
    std::cout << "Lenght of second string is: " << str2.length() << std::endl;
    str_concate(&str1, &str2);
    std::cout << "The concatenated string is: " << str1 << std::endl;

}