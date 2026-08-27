#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& boards, int painter, int maxTime) {

    int painterCount = 1;
    int time = 0;

    for(int i = 0; i < boards.size(); i++) {

        if(time + boards[i] <= maxTime) {
            time += boards[i];
        }
        else {
            painterCount++;

            if(painterCount > painter || boards[i] > maxTime) {
                return false;
            }

            time = boards[i];
        }
    }

    return true;
}

int bookAllocation(vector<int>& boards, int painter) {

    int start = 0;
    int end = 0;

    for(int time : boards) {
        start = max(start, time);
        end += time;
    }

    int ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(isPossible(boards, painter, mid)) {

            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}
int main(){
  vector<int>boards={1,34,2,5,3};//output 35 y?-->1+34=35nad 2+5+3=10 35||10 so 35 is choosen
  int painter=2;
  int ans=bookAllocation( boards, painter);
  cout<<"the minimum maximum pages \n"<<ans<<endl;
  return 0;
}