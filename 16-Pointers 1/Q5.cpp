//Write a function that returns the first character, last character and the number of occurrences of ‘t’ in a string input by user.

#include <iostream>
using namespace std;

int first_last(string s, char *first, char *last)
{
    *first = s[0];
    *last = s[s.size() - 1];
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 't'){
            cnt++;
        }    
    }
    return cnt;
}
 
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin >> s;
    char first, last;
    int count = first_last(s, &first, &last);
    cout << first << ' ' << last << ' ' << count;
    return 0;
}