//Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include<iostream>
using namespace std;

int main(){
    float a,b;
    char o;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operator (+,-,*,/): ";
    cin>>o;

    switch(o){
        case '+':
            cout<<a<<" + "<<b<<"= "<<a+b<<endl;
            break;
        case '-':
            cout<<a<<" - "<<b<<"= "<<a-b<<endl;
            break;
        case '*':
            cout<<a<<" * "<<b<<"= "<<a*b<<endl;
            break;
        case '/':
            cout<<a<<" / "<<b<<"= "<<a/b<<endl;
            break;
        default:
            cout<<"ERROR! The operator is not among: +,-,*,/";
            break;
    }
    return 0;
}