#include<iostream>
using namespace std;
void sortString(string &str) {
        
       
    int i, j;
    int n =str.size();
        
    for(int i=0;i<n-1;i++){
        int minIndex=i;//so i start from 1
        for(int j=i+1;j<n;j++){//i+1 means 1 se aage jao like 2,3,4,upto
            if(str[j]<str[minIndex]){//agar i j se bada hai toh equal ho jao
                minIndex=j;
            }

        }
        swap(str[minIndex],str[i]);
    }
}
       
        

int main(){
    string str="kingvijay";
    sortString(str);
    cout<<"the selection array is \n";
    
    cout<<str<<" ";
    
  
    return 0;
}
