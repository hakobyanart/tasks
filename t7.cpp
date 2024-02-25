#include <iostream>
#define SIZE 5

typedef void(*SelectionSortFptr)(int* arr);
typedef void(*BubbleSortFptr)(int* arr);

void bubble_sort(int* arr) {
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            if(arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void selectionSort(int* arr) {
    for (int i = 0; i < SIZE; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Обмен значениями
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void arr_init(int* arr) {
    for(int i = 0; i < SIZE; ++i) {
        std::cout << "Enter the " << i + 1 << " element of array" << std::endl;
        std::cin >> arr[i];
    }
}
void print(int* arr) {
    for(int i = 0; i < SIZE; ++i) {
        std::cout << "The " << i + 1 << " element of array is: " << arr[i] << std::endl;
    }
}
int main() {
    int arr[SIZE];
    arr_init(arr);
    std::cout << "The inputted array is: " << std::endl;
    print(arr);
    SelectionSortFptr fptr = selectionSort;
    BubbleSortFptr fptr1 = bubble_sort;
    int selector = 0;
    std::cout << "Sorting algorithms are SelectionSort which is 1, and BubbleSort which is 2" << std::endl;
    std::cout << "Choose a sorting algorithm for your array: ";
    std::cin >> selector;
    switch(selector) {
        case 1:
        fptr(arr);
        break;
        case 2:
        fptr1(arr);
        break;
        default:
        std::cout << "Entered an invalid option!";
        return -1;
        break;
    }
    std::cout << "Your sorted array is: " << std::endl;
    print(arr);
    return 0;

}