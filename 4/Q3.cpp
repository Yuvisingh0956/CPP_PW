//Q3 - Write a program to find the sum of n natural numbers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++){ 
        sum+=i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
    return 0;
}