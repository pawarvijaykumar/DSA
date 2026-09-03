#include <iostream>
using namespace std;

int main() {

    string s;
    cin >> s;

    //int freq[256] = {0};
    int freq[26]={0};

    // Count characters
    for(int i = 0; i < s.length(); i++) {
        freq[s[i]-'A']++;//its lower if u take upper y will write A instead od a
    }

    // Find maximum occurring character
    int maxFreq = 0;
    char ans;

    for(int i = 0; i < 26; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            ans = char(i+'A');
        }
    }

    cout << ans;

    return 0;
}