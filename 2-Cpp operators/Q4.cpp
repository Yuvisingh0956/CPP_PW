//Q4 Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main(){
    int n,a,b,c;
    cout<<"Enter the five-digit number: ";
    cin>>n;

    c=n; //storing original number
    n=n/10;
    a=n%10; //second last digit
    b=n/1000; //1st digit

    cout<<"The sum of first and second last digit of the number "<<c<<" is: "<<a+b;
    return 0;
}