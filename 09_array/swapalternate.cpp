#include<iostream>
using namespace std;
void swap(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";

  }cout<<endl;

  
}
void swapalternate(int arr[],int size){
  for(int i=0;i<size;i=i+4){//if i write i+2-->then is i = 0 → 2 → 4
    if(i+1<size){            //if i write i+4--:>n then is i = 0 → 4 → 8 → ...like that
      swap(arr[i],arr[i+1]);//means swap(3, 45);
    }
  }
}
int main(){
  int even[7]={3,45,3,5,34,54,53};

  swapalternate(even,7);
  swap(even,7);

  
  return 0;
}
//another method simply i paste is know 

#include <iostream>
using namespace std;

void swapalternate(int arr[], int size) {
    for(int i = 0; i < size; i = i + 2) {
        if(i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int even[5] = {3, 45, 3, 5, 34};

    swapalternate(even, 5);

    for(int i = 0; i < 5; i++) {
        cout << even[i] << " ";
    }

    return 0;
}