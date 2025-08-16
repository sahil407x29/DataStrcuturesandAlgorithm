#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int findUnique(vector<int> arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}
int main() {
  // vector<int> Arr(15,-3);

  // int ans = (sizeof(Arr)/sizeof(int));

  // cout << ans;

  // cout<<Arr.size()<<endl;
  // cout <<Arr.capacity();

  // insert
  // Arr.push_back(5);
  // Arr.push_back(6);
  // Arr.pop_back();

  // for(int i=0;i<Arr.size();i++){
  //     cout << Arr[i] << " ";
  // }

  //  cout <<Arr.capacity();
  // vector<int> crr{10,20,30,40,50,60};
  // if( crr.empty()==0){
  //   cout<<"false";
  // }
  // else{
  //   cout << "true";
  // }

  // find unique element
  // int n;
  // cout <<"enter the size of array";
  // cin>>n;
  // vector<int> arr(n);

  // cout <<"enter elements";
  // for(int i=0; i<arr.size();i++){
  //   cin >> arr[i];
  // }

  // int uniqueElement = findUnique(arr);

  // cout<< "Unique Element is :"<<uniqueElement;

  // return 0;
  // union of two vectors

  // int arr[]= {1,2,3,4,5};
  // int sizea = 5;
  // int brr[] = {4,5,6,7};
  // int sizeb = 4;

  // vector <int> ans;

  // for(int i=0;i<sizea;i++){
  //   ans.push_back(arr[i]);
  // }

  // for(int i=0;i<sizeb;i++){
  //   ans.push_back(brr[i]);
  // }

  // for(int i=0;i<ans.size();i++){
  //   cout << ans[i] << " ";
  // }
  // vector <int> arr{1,2,3,4,5,6,7};
  // vector <int> brr{4,5,9,8};
  // vector <int> ans;

  // for(int i=0;i<arr.size();i++){
  //   int element = arr[i];
  //   for(int j=0;j<brr.size();j++){
  //     if(brr[j]== element){
  //       brr[j] -= 1;        ans.push_back(element);
  //     }
  //   }
  // }
  //  for(auto value:ans){
  //    cout <<  value << " ";
  //  }

  // vector <int> arr{1,2,3,4,5,6,7};
  // vector <int> brr{4,5,9,8};
  // vector <int> ans;

  // for(int i=0;i<arr.size();i++){
  //   int element = arr[i];
  //   bool matched = false;
  //   for(int j=0;j<brr.size();j++){
  //     if(brr[j]== element){
  //       brr[j] = INT_MIN;
  //       matched = true;
  //       break;
  //     }

  //     } if(!matched){
  //     ans.push_back(element);
  //       }
  //   }
  // // Step 2: also take leftover elements from brr (not matched)
  // for(int i = 0; i < brr.size(); i++) {
  //     if(brr[i] != INT_MIN) {
  //         ans.push_back(brr[i]);
  //     }
  // }
  //  for(auto value:ans){
  //    cout <<  value << " ";
  //  }
  // finding PairSum
  // vector<int> arr{1, 2, 3, 4, 5, 6, 7};
  // int sum = 9;
  // for (int i = 0; i < arr.size(); i++) {
  //   int element = arr[i];
  //   for (int j = i + 1; j < arr.size(); j++)
  //     // cout<< element << " " << arr[j] << endl;
  //     if (element + arr[j] == sum) {
  //       cout << "pairs are"
  //            << "(" << element << "," << arr[j] << ")" << endl;
  //       ;
  //     }
  // }

  // finding triplet
  // vector<int> arr{10, 20, 30, 40, 50, 60, 70};
  // int sum = 160;
//   for (int i = 0; i < arr.size(); i++) {
//     int element = arr[i];
//     for (int j = i + 1; j < arr.size(); j++) {
//       // cout<< element << " " << arr[j] << endl;
//       int element2 = arr[j];
//       for (int k = j + 1; k < arr.size(); k++) {
//         int element3 = arr[k];
//         for (int x = k + 1  ; x < arr.size(); x++) {
//           int element4 = arr[x];
//           if (element + element2 + element3 + element4 == sum) {
//             cout << "combinations is"
//                  << "(" << element << "," << element2 << "," << element3 << ","
//                  << element4  << ")" << endl;
//           }
//         }
//       }
//     }
//   }

  vector<int> arr{0,1,0,1,1,0,1,0,1,1};

  int start = 0;
  int end = arr.size()-1;
  int i = 0;
   while(i !=end){
     if(arr[i] == 0){
       swap (arr[start],arr[i]);
       start++;
       i++;
     }
     else {
       swap(arr[end],arr[i]);
       end--;
     }
   }

  for(auto value : arr){
    cout << value << " ";
  }

  
 }
