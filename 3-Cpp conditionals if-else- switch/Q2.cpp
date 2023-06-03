//Q2 - Write a program to print absolute value of a number entered by the user.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the number: ";
    cin>>a;
    b=a; //storing user input

    if (a<0){
        a=a*(-1);
        cout<<"The absolute value of "<< b<<" is: "<<a;
    }
    else{
        cout<<"The absolute value of "<< b<<" is: "<<a;
    }
    return 0;
}