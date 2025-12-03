#include <iostream>

using namespace std;

int main() {

    char c;

    cout << "Please input a char: " << endl;
    cin >> c;

    auto vowel_or_not = [c]{
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return "True";
        }
        else {
            return "False";
        }
    }(); 

    cout << c << " a vowel : " << vowel_or_not << endl;

    return 0;
}