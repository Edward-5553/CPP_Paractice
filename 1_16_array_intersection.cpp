#include <iostream>
#include <vector>
#include <set>

using namespace std;

void findIntersection(const vector<int> &arr1, const vector<int> &arr2){
    set<int> s;

    for (int n : arr1){
        s. insert(n);
    }

    cout << "Intersection: ";

    bool first = true;

    for(int n : arr2){
        if (s.find(n) != s.end()){
            if (!first){
                cout << " ";
            }

            cout << n;

            first = false;
        }
    }

    cout << endl;
}

int main(){
    int n1, n2;
    cout << "Please input the number of elements for arr 1: " << endl;
    cin >> n1;

    vector<int> arr1(n1);

    cout << "Please input the elements of arr 1: " << endl;
    for (int &n : arr1){
        cin >> n;
    }

    cout << "Please input the number of elements for arr 2: " << endl;
    cin >> n2;

    vector<int> arr2(n2);

    cout << "Please input the elements of arr 2: " << endl;
    for (int &n: arr2){
        cin >> n;
    }

    findIntersection(arr1, arr2);

    return 0;
}