#include <iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    //int freq[256] = {0};
    int freq[10]={0};//1 to 9

    // Count characters
    for(int i = 0; i < s.length(); i++) {
        freq[s[i]-'0']++;//0  to start 
    }

    // Find maximum occurring character
    int maxFreq = 0;
    char ans;

    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = char(i+'0');
        }
    }

    cout << ans;

    return 0;
}