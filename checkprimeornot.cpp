#include <iostream>
using namespace std;

string prime(int n) {
    if (n <= 1) {
        return "Not Prime"; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return "Not Prime"; // If n is divisible by i, then it is not prime
        }
    }

    return "Prime"; // If n is not divisible by any number in the range, it is prime
}

int main() {
    int n;
    cin >> n;
    string ans = prime(n);
    cout << "The given number is " << ans << endl;
    return 0;
}
