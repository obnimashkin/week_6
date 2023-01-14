#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 1 && digit != 9) count++;
        n /= 10;
    }
    cout << count << endl;
    return 0;
}