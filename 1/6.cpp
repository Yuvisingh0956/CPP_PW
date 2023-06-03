//Q6 - Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    c=a;
    a=b;
    b=c;
    cout<<"The input is in the order: "<<c<<","<<a<<" and the output after swapping is: "<<a<<","<<b<<endl;
    return 0;
}