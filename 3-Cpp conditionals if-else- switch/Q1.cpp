//Q1 - Write a program which takes the values of length and breadth from user and check if it is a square or not.

#include <iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;

    if (l==b){
        cout<<"It is a square"<<endl;
    }
    else{
        cout<<"It is a rectangle"<<endl;
    }
    return 0;
}