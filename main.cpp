/*
------------------------Code documentation------------------------
Created : 4/10/24
Author  : Patel, Vraj K.
To do   : Post this program to the GitHub
*/
#include <iostream>
#include <vector>
/*function prototype*/

void convertToRREF(int* matrix);


int main() {
    int m;      //  represent the row of a matrix
    int n;      //  represent the column of a matrix
    int size;   //  represent the size of a matrix
    std::vector<int> matrix;
    std::cout << "The dimension of the matrix:";
    std::cout << "\nNumber of rows: ";
    std::cin >> m;
    std::cout << "Number of columns: ";
    std::cin >> n;
    size = m * n;

    int i = 0;  //  counter for the following loop
    int element;
    while (i < size) {
        std::cin >> element;
        matrix.push_back(element);
        i++;
    }
    std::cout << "The matrix:-";
    i = 0;  //  counter for the following loop
    while (i < size) {
        if (i % n == 0) {
            std::cout << std::endl;
        }
        std::cout << matrix[i] << " ";
        i++;
    } 
    return 0;
}