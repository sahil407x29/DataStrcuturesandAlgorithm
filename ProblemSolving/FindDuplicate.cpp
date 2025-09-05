#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void findDuplicateMethod(vector<int> arr){
  while(arr[0]!=arr[arr[0]]){
    swap(arr[0],arr[arr[0]]);
  }
  cout<< arr[0];
}
void findDupicateVis(vector<int> arr){
  int ans = 0;
  for(int i = 0;i<arr.size();i++){
    int index = abs(arr[i]);
           
     if(arr[index] <  0){
       ans = index;
       break;
     }
    else{
      arr[index] *= -1;
    }
  } cout << ans;
}

void findDuplicate(vector<int> arr) {
  // this method works but modifies the original array 
  sort(arr.begin(), arr.end()); 

  for (int i = 0; i < arr.size() - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      cout << arr[i];
      break;
    }
  }
}
int main() {

  vector<int> arr = {1, 2, 3, 4, 4, 5};
  // findDuplicate(arr);
  // findDupicateVis(arr);
  findDuplicateMethod(arr);
}