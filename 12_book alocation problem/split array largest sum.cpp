#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& books, int students, int maxPages) {

    int studentCount = 1;
    int pages = 0;

    for(int i = 0; i < books.size(); i++) {

        if(pages + books[i] <= maxPages) {
            pages += books[i];
        }
        else {
            studentCount++;

            if(studentCount > students || books[i] > maxPages) {
                return false;
            }

            pages = books[i];
        }
    }

    return true;
}

int bookAllocation(vector<int>& books, int students) {

    int start = 0;
    int end = 0;

    for(int pages : books) {
        start = max(start, pages);
        end += pages;
    }

    int ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(isPossible(books, students, mid)) {

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
  vector<int>books={1,34,2,5,3};//output 35 y?-->1+34=35nad 2+5+3=10 35||10 so 35 is choosen
  int students=2;
  int ans=bookAllocation( books, students);
  cout<<"the minimum maximum pages \n"<<ans<<endl;
  return 0;
}