// Using pointers, find the sum of elements present on the primary diagonal of the given n x n 2-D matrix.
// The first line of input contains the n, the size of the matrix.
// The next n lines contain the number of elements present in each row of the matrix.

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    std::cout<<"Enter the size of array: ";
    std::cin>> n;

    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout<<"Enter the array element: ";
            std::cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        sum += *(*(arr + i)+ i);
    }
    std::cout<<sum;
    return 0;
}