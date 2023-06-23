// Write a program to find the sum of all the elements of an array. Use pointers to traverse the array. 
// The first line of the input contains the size of the array.
// The second line of input contains the elements of the array.

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    std::cout<<"Enter the size of array: ";
    std::cin>> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        std::cout<<"Enter the array element: ";
        std::cin>>arr[i];
    }

    int *ptr = arr;
    for (int i = 0; i < n; i++){
        sum += *ptr++; 
    }

    std::cout<<sum;

    return 0;
}