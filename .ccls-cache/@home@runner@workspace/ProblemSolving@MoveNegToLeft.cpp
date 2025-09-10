// #include <iostream>
// using namespace std;
// // Dutch national flag algo
// // tc - o(n)
// // sc - o(1)
// // Dutch National Flag method
// void MoveNegToLeft(int arr[],int size){
//   int start = 0;
//   int end = size - 1;
//   while( start < end) {
//       if(arr[start] < 0 ){
//         start ++;
//       }
//       else if (arr[end] > 0){
//         end --;
//       }
//     else {
//       swap(arr[start],arr[end]);
//     }
//   } 
// }
// int main() {
//   int arr[] = {-2,4,2,4,-2,-6,-7};
//   int size = sizeof(arr)/sizeof(arr[0]);
//   MoveNegToLeft(arr,size);

//   for(int i=0;i<size;i++){
//     cout<< arr[i] << " ";
//   }
//   cout <<endl;


// }