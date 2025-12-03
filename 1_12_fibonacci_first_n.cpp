#include <iostream>

using namespace std;

void printFibonacci(int n){

    int t1 = 0, t2 = 1;
    int nextTerm = 0;

    cout << "Fibonacci : ";
    for (int i = 1; i <= n; ++i){
        if (i == 1){
            cout << t1;
        }
        else if (i == 2){
            cout << ", " << t2;
        }
        else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            cout << ", " << nextTerm;
        }
    }
    cout << endl;
    
    return ;
}

int main(){

    int num;
    cout << "Please input the number: " << endl;
    cin >> num;

    printFibonacci(num);

    return 0;
}