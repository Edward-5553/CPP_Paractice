#include <iostream>

using namespace std;

// Original recursive version (commented out for reference)
/*
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int a;
    cout << "please input a number: " << endl;
    cin >> a;
    cout << "Result is : " << factorial(a) << endl;
    return 0;
}
*/

int main() {
    int a;
    cout << "please input a number: " << endl;
    cin >> a;

    // Lambda IIFE factorial (iterative)
    if (a < 0) {
        cout << "error: negative input" << endl;
        return 1;
    }
    auto result = [&] (int n) -> unsigned long long {
        unsigned long long r = 1;
        for (int i = 2; i <= n; ++i) {
            r *= static_cast<unsigned long long>(i);
        }
        return r;
    }(a);

    cout << "Result is : " << result << endl;
    return 0;
}
