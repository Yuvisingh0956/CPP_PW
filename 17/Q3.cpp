// Write a program to traverse the array in the reverse order using pointers.
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

    int *ptr = &arr[n-1];
    while (1){
        std::cout<< *ptr<<" ";
        if (ptr == arr){
            break;
        }
        ptr--;
    }
    return 0;
}