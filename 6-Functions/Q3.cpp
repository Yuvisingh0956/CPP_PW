//Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

#include<iostream>
using namespace std;

bool vote(int age){
    if (age>=18){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a;
    cout<<"Enter the age: ";
    cin>>a;

    if (vote(a)==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}