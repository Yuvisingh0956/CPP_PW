//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,d,sum;
    cout<<"Enter the three digit number: ";
    cin>>n;

    d=n; //storing original number
    a=n%10; //last digit
    n=n/10;
    b=n%10; //second digit
    c=n/10; //first digit
    sum= (a+b+c);

    cout<<"The sum of the digits of the number "<<d<<" is: "<<sum<<endl;
    return 0;
}