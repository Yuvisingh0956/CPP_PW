//Q4 - Write a program to reverse a given integer number.

#include<iostream>
using namespace std;

int main(){
    int n,number,b;
    cout<<"Enter the number: ";
    cin>>n;

    int a=n;
    number=0;
    while(a!=0){
        b=a%10;
        number=number*10+b;
        a=a/10;
    }
    cout<<"The reverse of the number "<<n<< " is: "<<number;
    return 0;
}