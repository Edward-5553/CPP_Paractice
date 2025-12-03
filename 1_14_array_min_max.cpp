#include <iostream>
#include <vector>

using namespace std;

void findMinMax(const vector<int>& arr, int& min, int& max){
    if (arr.empty()){
        return ;
    }

    min = arr[0];
    max = arr[0];

    for (int num : arr){
        if (num < min){
            min = num;
        }
        if (num > max){
            max = num;
        }
    }

    return ;
}

int main(){
    int n;

    cout << "Please input the number of elements: " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Please input the element: " << endl;
    for (int &num : arr){
        cin >> num;
    }

    cout << arr[0] << endl;

    int max, min;

    findMinMax(arr, min, max);

    cout << "Min : " << min << " Max : " << max << endl;

    return 0;
}
