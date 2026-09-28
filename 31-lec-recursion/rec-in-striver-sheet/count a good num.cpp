#include <iostream>
using namespace std;

long long solve(long long index, long long n) {

    if (index == n)
        return 1;

    if (index % 2 == 0) {
        return (5 * solve(index + 1, n)) % 1000000007;
    }
    else {
        return (4 * solve(index + 1, n)) % 1000000007;
    }
}

int main() {

    long long n;
    cin >> n;

    long long ans = solve(0, n);

    cout << ans << endl;

    return 0;
}