#include <iostream>
#include <time.h>
#include <vector>
#include <random>

void printer (std::vector<std::vector<int> >& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++){
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void invert(std::vector<std::vector<int> >& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            arr[i][j] = !arr[i][j];
        }
    }
}

void reverse(std::vector<std::vector<int> >& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size()/2; j++) {
            std::swap(arr[i][j], arr[i][arr.size()-1-j]);
        }
    }
}


int main(){
    srand(time(0));
    std::vector<std::vector<int> > arr;
    std::vector<int> tmp;
    for(int i = 0; i < 3; i++) {
        arr.push_back(tmp);
    }
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            arr[i].push_back(rand() % 2);
        }
    }
    printer(arr);
    reverse(arr);
    printer(arr);
    invert(arr);
    printer(arr);
}