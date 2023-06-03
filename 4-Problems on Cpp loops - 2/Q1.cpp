//Q1 - Write a program to calculate the factorial of a number.

#include <iostream>
using namespace std;

int main(){
    int n,a;
    cout<<"Enter the number: ";
    cin>>n;
    a=1;

    for (int i=1;i<=n;i++){
        a*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<a<<endl;
    return 0;
}