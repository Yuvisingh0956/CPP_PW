//Q1 - Write a function to print squares of the first 5 natural numbers.

#include <iostream>
using namespace std;

int square(int num){
    int sqr=num*num;
    return sqr;
}

int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        cout<<square(i)<<" ";
    }
    return 0;
}