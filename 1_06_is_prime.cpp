#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Please input a number : " << endl;

    cin >> n;

    auto prime_or_not = [n]{
        if (n <= 1) return false;
        for (int i = 2; i <= n / 2; ++i){
            if (n % i == 0) return false;
        }

        return true;
    }();

    cout << "Input is prime : " << prime_or_not << endl;
}