//Write a program to find the product of 2 numbers using pointers.

#include <iostream>
using namespace std;

int main(){
    int x = 2, y = 3;

    int *ptrx = &x;
    int *ptry = &y;

    int result;

    int *ptr_result = &result;

    *ptr_result = *ptrx * *ptry;

    cout<<"The product is: "<< result;

    return 0;
}