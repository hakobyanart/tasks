#include <iostream>
#include <unistd.h>

int main() {
    int var = 10;
    int another_var = 20;
    int* ptr = NULL;
    int &ref = var;
    ptr = &var;
    int temp = 0;
    std::cout << "The value of var is: " << var << std::endl;
    std::cout << "Pointer that points to var is: " << *ptr << std::endl;
    std::cout << "Ref that refers to our var is: " << ref << std::endl;
    //&ref = another_var; Impossible to refer to another variable
    std::cout << "Now changing tha value by reference!" << std::endl;
    sleep(2);
    ref = 40;
    std::cout << "The value of var is: " << var << std::endl;
    std::cout << "Pointer that points to var is: " << *ptr << std::endl;
    std::cout << "Ref that refers to our var is: " << ref << std::endl;
    std::cout << "Now lets change the value by pointer!" << std::endl;
    sleep(2);
    *ptr = 100;
    std::cout << "The value of var is: " << var << std::endl;
    std::cout << "Pointer that points to var is: " << *ptr << std::endl;
    std::cout << "Ref that refers to our var is: " << ref << std::endl;
    ptr = &another_var;// Pointer can point to another object what we cannot say about the reference!



}