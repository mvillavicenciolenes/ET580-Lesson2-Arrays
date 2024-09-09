// S. Trowbridge 2024
#include <iostream>
#include <cassert>

void print(int a[][3], int s1, int s2)              // parameters: array ptr, size of 1st dimension, size of 2nd dimension
{
    for(int i=0; i<s1; ++i) {         
        for(int j=0; j<s2; ++j) {
            std::cout << a[i][j] << " "; 
        }   
        std::cout << "\n";                                  
    }
    std::cout << "\n";
}
void printMem(int a[][3], int s1, int s2)           // parameters: array ptr, size of 1st dimension, size of 2nd dimension
{
    for(int i=0; i<s1; ++i) {         
        for(int j=0; j<s2; ++j) {
            std::cout << &(a[i][j]) << " "; 
        }   
        std::cout << "\n";                                  
    }
    std::cout << "\n";
}

int main() 
{
    std::cout << std::endl;

    const int row = 2;
    const int col = 3;                         
    int nums[row][col] = { {10,20,30}, {40,50,60} };  // two dimensional array of integers         

    print(nums, row, col);
    printMem(nums, row, col);    

    std::cout << std::endl;    
    return 0;
}
