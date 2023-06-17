//- Implement the swap function using pointers.

#include <iostream>
using namespace std;


int swap(int *num1, int *num2){
    int temp = *num1;
    *num2 = *num1;
    *num1 = temp;
}
int main(){
    int num1, num2;
    cout<<"Enter the two numbers: ";
    cin>> num1 >> num2;
    swap(num1, num2);
    cout<<num1<<" "<<num2;
    return 0;
}