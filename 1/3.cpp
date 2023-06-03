//Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.

#include <iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;

    cout<<"The area of the rectangle with length "<<l<<" and breadth "<<b<<" is: "<<(l*b)<<endl;
    return 0;
}