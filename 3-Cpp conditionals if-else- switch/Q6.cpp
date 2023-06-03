//Q6 Write a program to calculate marks to grades .

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"Your grade is A+";
    }
    else if(marks>=80){
        cout<<"Your grade is A";
    }
    else if(marks>=70){
        cout<<"Your grade is B+";
    }
    else if(marks>=60){
        cout<<"Your grade is B";
    }
    else if(marks>=50){
        cout<<"Your grade is C";
    }
    else if(marks>=40){
        cout<<"Your grade is D";
    }
    else if(marks>=30){
        cout<<"Your grade is E";
    }
    else if(marks<=30){
        cout<<"Your grade is F";
    }
    else{
        cout<<"Enter valid marks";
    }
    return 0;
}