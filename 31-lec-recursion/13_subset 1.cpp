#include <iostream>
using namespace std;

void solve(string str, int index) {

    // Base case
    if(index >= str.length()) {
        cout << str << endl;
        return;
    }

    for(int i = index; i < str.length(); i++) {

        // choose
        swap(str[index], str[i]);

        // recursive call
        solve(str, index + 1);

        // backtrack
        swap(str[index], str[i]);
    }
}

int main() {

    string str = "abc";

    solve(str, 0);

    return 0;
}