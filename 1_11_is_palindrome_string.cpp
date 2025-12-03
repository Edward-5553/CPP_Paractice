#include <iostream>

using namespace std;


int main(){

    string str;

    cout << "Please input a string : " << str << endl;
    cin >> str;

    auto isPalindrome = [str]{
        int n = str.length();
        for (int i = 0; i < n/2; ++i) {
            if (str[i] != str[n-i-1]){
                return false;
            }
        }
        return true;
    }();

    cout << "Input string is Palindrome: " << isPalindrome << endl;

    return 0; 
}