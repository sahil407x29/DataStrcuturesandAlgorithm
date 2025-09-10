// #include <iostream>
// #include <limits.h>
// #include<vector>
// using namespace std;
// void printArray(int arr[][3],int row,int col) {
//   for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//       cout << arr[i][j] << " ";
//     } cout << endl;
//   }
  
// }
// void transpose(int arr[][3],int r , int c,int transposeArr[][3]){
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//       transposeArr[i][j] = arr[j][i];
//     }
//   }
  
// }
// int findMax (int arr[][3],int row,int col) {
//    int max = INT_MIN;
//   for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//       if(arr[i][j] > max)
//         max = arr[i][j];
      
//     }
    
//   }  
//   return max;
// }
// bool findKey(int arr[][3] , int row,int col,int key){
//   for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//       if(arr[i][j] == key)
//         return true;
      
//     } 
//   } return false;
// }
// void printRowWiseSum(int arr[][3],int rows,int cols){
//   cout<< "printing row wise sum:";

// for(int i=0;i<rows;i++){
//   int sum=0;
//   for(int j=0;j<cols;j++){
//     sum = sum + arr[i][j];
//   } 
//   cout << sum << endl;
// }
// }

// void printColWiseSum(int arr[][3],int rows,int cols){
//     cout<< "printing coloumn wise sum:";

//   for(int i=0;i<rows;i++){
//     int sum=0;
//     for(int j=0;j<cols;j++){
//       sum = sum + arr[j][i];
//     } 
//     cout << sum << endl;
//   }

// }

// int main() {
//   // declare a 2D array
//   // int arr[3][3];

//  //  // initialization
//  //  int brr[3][3] = {{1, 2, 3}, {4, 5, 6} ,{7,8,9}};

//  // // row wise print 
//  //  // outer loop 
//  //  for(int i=0; i<3;i++ ){
//  //    // inner loop 
//  //    for(int j=0;j<3;j++){
//  //      cout << brr[i][j] << " ";
//  //    }
//  //    cout << endl;
//  //  }

// //   int array [4][3];
// //   int rows = 4;
// //   int cols = 3;

// //   for(int i =0;i<rows;i++) {
// //     for(int j=0;j<cols;j++){
// //       cin >> array[i][j];
// //     }
    
// //   }
// //   for(int i =0;i<rows;i++) {
// //     for(int j=0;j<cols;j++){
// //       cout << array[i][j]<< " " ;
// //     }
// //     cout << endl;

// //   }
  
// // }


// // coloum wise

//  // int array [4][3];
//  //  int rows = 4;
//  //  int cols = 3;

//  //  for(int i =0;i<rows;i++) {
//  //    for(int j=0;j<cols;j++){
//  //      cin >> array[i][j];
//  //    }

//  //  }
//  //  for(int i =0;i<rows;i++) {
//  //    for(int j=0;j<cols;j++){
//  //      cout << array[j][i]<< " " ;
//  //    }
//  //    cout << endl;

//  //  }

//   // to print row-wise sum

//   // int arr[3][3] = {{3,4,5},{4,5,6},{7,8,9}};

//     // printRowWiseSum(arr,3,3);
//   // printColWiseSum(arr,3,3);

//   // int arr[3][3] = {{3,4,5},{4,5,6},{7,8,9}};
//  //  int row = 3;
//  //  int col = 3;
//  //  int key = 8;

//  // if(findKey(arr,row,col,key)){
//  //   cout << "true" << endl;
//  // }
//  //  else {
//  //    cout << "false" << endl;
//  //  }


//   // int arr[3][3] = {{3,4,5},{4,5,6},{7,8,9}};
//   // int row = 3;
//   // int col = 3;

//   // int maxNum = findMax(arr,row,col);
//   // cout << maxNum;
// //   int transposeArr[3][3];
// // int arr[3][3] = {{3,4,5},{4,5,6},{7,8,9}};
// // int row = 3;
// // int col = 3;
  
// //   transpose(arr,row,col,transposeArr) ;
// //   printArray(transposeArr, row, col);

//   // vector<vector<int> >arr;

//   // vector<int> a{1,2,3,4,5,6};
//   // vector<int> b{4,5,6};
//   // vector <int> c{3,4,5};
//   // arr.push_back(a);
//   // arr.push_back(b);
//   // arr.push_back(c);

//   // for(int i=0;i<arr.size();i++){
//   //   for(int j=0;j<arr[i].size();j++){
//   //     cout<< arr[i][j]<<" ";
//   //   } cout<<endl;
//   // }
  
// }