//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include<iostream>
using namespace std;

int main(){
    int cp, sp,a;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the selling price: ";
    cin>>sp;

    a=sp-cp;

    if (a>0){
        cout<<"Made a profit of Rs: "<<a<<endl;
    }
    else if(a<0) {
        a=a*(-1);
        cout<<"Suffered a loss of Rs: "<<a<<endl;
    }
    else{
        cout<<"Neither loss nor profit"<<endl;
    }
    return 0;
}