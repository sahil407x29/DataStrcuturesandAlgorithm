#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> arr){
  int ans = 0;
  for(int i =0;i<arr.size();i++){
    ans = ans ^ arr[i];
  
  } return ans;
}
int main (){
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
  vector <int> arr{1,2,3,4,5,6,7};
  vector <int> brr{4,5,9,8};
  vector <int> ans;
  for(int i=0;i<arr.size();i++){
    int element = arr[i];
    for(int j=0;j<brr.size();j++){
      if(brr[j]== element){
        brr[j] -= 1;        ans.push_back(element);
      }
    }
  }
   for(auto value:ans){
     cout <<  value << " ";
   }
}