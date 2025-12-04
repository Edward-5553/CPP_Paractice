#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int> &arr) {

  cout << "Array: ";
  for (int number : arr) {
    cout << number << " ";
  }

  cout << endl;
}

void bubbleSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n;

  cout << "Please input the number of elements: " << endl;
  cin >> n;

  vector<int> arr(n);
  cout << "Please input the elements for the array: " << endl;
  for (int &number : arr) {
    cin >> number;
  }

  printArray(arr);

  bubbleSort(arr);

  printArray(arr);

  return 0;
}