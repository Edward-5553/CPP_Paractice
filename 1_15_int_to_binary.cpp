#include <iostream>
#include <vector>

using namespace std;

void convertToBinary(int n){

    vector<int> binaryNum;
    while (n > 0){
        binaryNum.push_back(n%2);
        n = n / 2;
    }

    if (binaryNum.empty()){
        cout << 0;
    } else {
        for (auto it = binaryNum.rbegin(); it != binaryNum.rend(); ++it){
            cout << *it;
        }
    }

    cout << endl;
}

int main(){

    int num;

    cout << "Please input a number: " << endl;
    cin >> num;

    convertToBinary(num);

    return 0;
}
