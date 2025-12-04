#include <iostream>
#include <vector>

using namespace std;

void findSecondLargest(vector<int> &arr) {
  int first, second;
  first = second = 0;

  for (int num : arr) {
    if (num > first) {
      second = first;
      first = num;
    } else if (num > second && num != first) {
      second = num;
    }
  }
  cout << "Second: " << second << endl;
}

int main() {

  int n;

  cout << "Please input the number of elements : " << endl;
  cin >> n;

  cout << "Please input the elements for this array: " << endl;
  vector<int> arr(n);
  for (int &number : arr) {
    cin >> number;
  }

  findSecondLargest(arr);

  return 0;
}