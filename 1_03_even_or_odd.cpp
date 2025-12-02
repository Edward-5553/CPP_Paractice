#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int a;

    cout << "Plase Input a integer: " << endl;

    cin >> a;

    if (!(a % 2)){
        cout << u8"偶数";
    } else {
        cout << u8"奇数";
    }

    cout << endl;
}
