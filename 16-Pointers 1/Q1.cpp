//Write a program to print the address of an integer variable whose value is input by the user.

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of integer: ";
    cin>>x;

    int *ptr = &x;

    cout<<"The address of the integer variable is: " << ptr << endl;

    return 0;
}