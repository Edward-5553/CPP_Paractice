#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n, maxNum;

    cout << "Please input the number of element: " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Please input " << n << " elements" << endl;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    maxNum = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > maxNum){
            maxNum = arr[i];
        }
    }

    cout << "Max Number is : " << maxNum << endl;
    return 0;
}