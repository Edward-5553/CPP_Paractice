#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;

    cout << "Please input the number of element: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Please input the element : " << endl;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    auto avg_result = [arr]{
        int sum = 0;
        for (int num : arr){
            sum += num;
        }

        return sum / arr.size();
    }();

    cout << "average is : " << avg_result << endl;
    return 0;
}