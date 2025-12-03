#include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Please input a number: " << endl;
    cin >> num;

    auto reverse_result = [num]{
        int reverse = 0;
        int num_bak = num;
        while (num_bak != 0){
            reverse = reverse * 10 + num_bak % 10;
            num_bak /= 10;
        }

        return reverse;
    }();

    cout << "Reverse result : " << reverse_result << endl;

    return 0;
}
