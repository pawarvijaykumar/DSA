#include <iostream>
#include <map>

using namespace std;

int main() {

    map<int, string> m;

    // m[103] = "Amit";
    // m[101] = "Vijay";
    // m[102] = "Rahul";
    //suppose i write 
    m[101] = "Amit";
    m[101] = "Vijay";//this print-->maintains keys in sorted order.

    for(auto x : m) {
        cout << x.first << " → " << x.second << endl;
    }

    return 0;
}