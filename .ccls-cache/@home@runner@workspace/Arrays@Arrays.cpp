// #include <iostream>
// #include <limits.h>
// using namespace std;
// void checkMin(int arr[],int size){
//   int minNum = INT_MAX;
//   for(int i =0;i<size;i++){
//     if(arr[i]<minNum){
//       minNum = arr[i];
//     }

//   }  cout << "smallest number is:"  << minNum; 
// }
// void checkMax(int arr[],int size){
//   int maxNum = INT_MIN;
//   for(int i =0;i<size;i++){
//     if(arr[i]>maxNum){
//       maxNum = arr[i];
//     }
   
//   }  cout << "largest number is:"  << maxNum; 
// }
// void checkZero(int arr[], int size){
//   int one = 0;
//   int zero = 0;
//   int garbage =0;
//   for(int i =0;i<size;i++){
//     if(arr[i] == 1){
//       one++ ;
//     }
//     else if(arr[i] == 0) {
//       zero++;
//     }
//     else {
//       garbage++;
//     }
   
//     }
//   cout << "number of ones : " << one << endl;
//   cout << "number of zero : " << zero << endl;
//   cout << "number of garbage : " << garbage << endl;
  
//   } 

// bool find (int arr[],int size, int key) {
//   for(int i=0;i<size;i++){
//     if(arr[i] == key){
//       return true;
//     } 
//   } return false;
// }
// void PrintArray(int arr[],int size){
//   for(int i =0;i<size;i++){
//     cout << arr[i] <<" ";
//   } cout <<endl;
// }

// void inc(int arr[],int size){
//   arr[0]+= 10;

//   PrintArray(arr, size);
// }
// int main(){

//   // reverse an array 

//   // int arr[] = {10,20,30,40,50,60,70,};
//   // int size = 7;
//   // int start =0;
//   // int end = size-1;
//   // while(start <=end){
//   //   swap(arr[start],arr[end]);

//   //   start ++ ;
//   //   end --;
    
//   // }
//   // for(int i=0;i<size;i++){
//   //   cout << arr[i] <<" ";
//   // }
//   // extreme of a array
//   // int arr[] = {10,20,30,40,50,60,70,};
//   // int size = 7;
//   // int start =0;
//   // int end = size-1;
//   // while(true){
//   //   if(start>end){
//   //     break;
//   //   }
//   //   else if(start == end) {
//   //     cout << arr[start] << " ";
//   //   }
//   //   else {
//   //     cout << arr[start]<<" ";
//   //     cout<< arr[end] << " ";
//   //   }
//   //   start ++;
//   //   end--;
//   // }
//   // int arr[] = {27,13,13,11,06,99,23,70,19};
//   // int size = 9;
//   // checkMin(arr,size);
//   // int arr[] = {27,13,13,11,06,99,23,70,19};
//   // int size = 9;
//   // checkMax(arr,size);
//   // int arr[] = {0,1,1,1,0,9,3,0,1};
//   // int size = 9;
//   // checkZero(arr,size);
//   // int arr[] = {5,6};
//   // int size = 2;
//   // int key = 15;
//   // int result = find(arr,size,key);
//   // if(result) {
//   //    cout << "true";
//   // }
//   // else {
//   //   cout << "false";
//   // }
//   // int arr[] = {5,6};
//   // int size = 2;
//   // inc(arr, size);
//   // PrintArray(arr, size);
//   // int Arr[53];
//   // char arr[106];
//   // int n;
//   //  cout<<"enter the value of n";
//   // cin >> n;
 
  
//   // int Arr[10];
//   // // taking input
//   // for(int i=0;i<n ;i++){
//   //   cin >> Arr[i];
//   // }

  
//   //  // printing

//   // for(int i=0;i<n;i++){
//   //   cout << Arr[i]<<" ";
//   // }

//   // int arr[10] = {1,2,3,4,5,6};
//   // for(int i=0; i<arr[5];i++){
//   //   cout << arr[i]*2 << " ";
//   // }

//   // cout <<"array initialised successfully : "<<Arr[4];

  
// }