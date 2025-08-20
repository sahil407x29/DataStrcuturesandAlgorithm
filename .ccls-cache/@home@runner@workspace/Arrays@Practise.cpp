// #include <iostream>
// using namespace std;
// bool find(int arr[],int size,int key) {
//   for(int i =0; i < size ; i++){
//     if(arr[i] == key) {
//       return true;
//     }
//   } return false;
// }

// int main() {

//   int arr[] = {10,20,30,40,50,60,70};
//   int size = 7;
//   // int key = 9;
//   // int check = find(arr,size,key);
//   // if(check == true) {
//   //   cout<<"available";
//   // }
//   // else {
//   //   cout<<"unavailable";
//   // }
//   int start = 0;
//   int end = size-1;

//   // while(true){
//   //   if(start>end){
//   //     break;
//   //   }
//   //   else if (start == end){
//   //     cout << arr[start] << " ";
//   //   }
//   //   else {
//   //     cout << arr[start] << " ";
//   //     cout << arr[end] << " ";
//   //   }
//   //   start ++;
//   //   end--;
//   // }
//   while(start<end) {
//     swap(arr[start] ,arr[end]);

//     start++;
//     end--;
//   }

//   for(int i =0 ;i<size ; i++){
//     cout << arr[i] << " ";
//   }
  

// }