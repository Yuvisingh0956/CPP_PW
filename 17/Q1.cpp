// Write a program to print the kth element of an array using pointers.
// The first line of the input contains the size of the array and the value of k.
// The second line of input contains the elements of the array. You can assume that 0 <= k < size of the array.

#include <iostream>
using namespace std;

int main(){
    int n,k;
    std::cout<<"Enter the size of array: ";
    std::cin>> n;
    std::cout<<"Enter the kth element value: ";
    std::cin>>k;

    int arr[n];

    for (int i = 0; i < n; i++){
        std::cout<<"Enter the array element: ";
        std::cin>> arr[i];
    }

    int *ptr = (arr+(k-1));
    std::cout<<*ptr;

    return 0;
}