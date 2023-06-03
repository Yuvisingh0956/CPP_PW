//Q5 - Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include<iostream>
using namespace std;

bool prime(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if (n%i==0){
            count+=1;
        }
    }
    
    if (count==1){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    for (int i=a;i<=b;i++){
        if(prime(i)==true){
            cout<<i<<" ";
        }
    }
    return 0;
}