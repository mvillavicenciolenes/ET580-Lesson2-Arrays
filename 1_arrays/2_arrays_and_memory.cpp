// S. Trowbridge 2024
#include <iostream>

/*
    array indexes: 0    1    2    3    4    5               // indices run from 0 to size-1
    array data:    10   20   30   40   50   60              // the memory address of the 1st value is the memory address of the array
    memory:        3010 3014 3018 301c 3020 3024            // each integer variable takes up 4 bytes of space
*/
int main() 
{
    std::cout << std::endl;

    const int SIZE = 6;                                     // Define a constant SIZE for the array
    int nums[SIZE] = {10, 20, 30, 40, 50, 60};              // Declare and initialize an array of 6 integers
    std::cout << sizeof(nums) << " bytes\n";                // Print the size of the entire array in bytes (6 integers x 4 bytes = 24 bytes)

    // Print each element of the array and its memory address
    for(int i = 0; i < SIZE; ++i) {                         
        std::cout << nums[i] << " " << &(nums[i]) << "\n";  // nums[i] accesses the value, &(nums[i]) gives the memory address of each element
    }
    std::cout << "\n";

    // Pointer to the array
    int *p = nums;                                          // Declare a pointer p and initialize it with the address of the array nums
    std::cout << sizeof(p) << " bytes\n";                   // Print the size of the pointer variable p (typically 8 bytes on a 64-bit system)

    // Print each element of the array using the pointer and its memory address
    for(int i = 0; i < SIZE; ++i) {                         
        std::cout << p[i] << " " << &(p[i]) << "\n";        // p[i] is equivalent to nums[i], and &(p[i]) is the same as &(nums[i]) 
    }
    std::cout << "\n";

    std::cout << std::endl;    
    return 0;
}
