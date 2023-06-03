//Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<(a==b)? 1:0;   //1 if equal and 0 if not equal
    return 0;
}