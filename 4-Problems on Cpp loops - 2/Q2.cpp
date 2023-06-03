//Q2 - Write a program to print all Armstrong numbers between 100 to 500.

#include <iostream>
using namespace std;

int main(){
    int a,sum;
    cout<<"The Armstrong numbers between 100 and 500 are: "<<endl;
    for (int i=0;i<500;i++){
        sum=0;
        a=i;
        while (a!=0){
            sum =sum+ ((a%10) * (a%10) * (a%10));
            a=a/10;
        }
        if (sum==i){
            cout<<i<<endl;
        }
        
    }
    return 0;
}