#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Please input the number: " << endl;

    cin >> n;

    auto sum_result = [&](int m)->int{
        int output = 0;

        for (int i = 1; i <= m; i++){
            output += i;
        }
        return output;
    };

    cout << "Result is : " << sum_result(n) << endl;
}
