#include <iostream>
#include <limits>
#include <vector>
using namespace std;
void findMissingSortSwap(vector<int> arr) {
  while(int i=0 < arr.size()){
   int index = arr[i] - 1;
    if(arr[i]!=arr[index]){
      swap(arr[i],arr[index]);
    }
    else {
      i++;
    }
 }
  for(int i=0;i<arr.size();i++){
   if(arr[i]!=i+1){
     cout<< i+1;
   }
  }
    
}
void FindMissing(vector<int> arr){
  for(int i=0;i<arr.size();i++){
    int index = abs(arr[i]);
    if(arr[index-1]>0){
      arr[index-1] *=-1;
      // index-1 → because numbers are 1-based, but array positions are 0-based.
    }
  }
  for(int i=0;i<arr.size();i++){
    if(arr[i] > 0){
      cout << i+1 << " ";
      // i+1 → because when checking positions, index i corresponds to number (i+1).
    }
  }
}

int main(){
  vector<int> arr= {1,3,4,4,3};
  FindMissing(arr);
}