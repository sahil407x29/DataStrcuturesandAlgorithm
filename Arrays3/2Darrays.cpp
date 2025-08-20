#include <iostream>
// #include<vector>
using namespace std;
int main() {
  // declare a 2D array
  // int arr[3][3];

 //  // initialization
 //  int brr[3][3] = {{1, 2, 3}, {4, 5, 6} ,{7,8,9}};

 // // row wise print 
 //  // outer loop 
 //  for(int i=0; i<3;i++ ){
 //    // inner loop 
 //    for(int j=0;j<3;j++){
 //      cout << brr[i][j] << " ";
 //    }
 //    cout << endl;
 //  }

  int array [4][3];
  int rows = 4;
  int cols = 3;

  for(int i =0;i<rows;i++) {
    for(int j=0;j<cols;j++){
      cin >> array[i][j];
    }
    
  }
  for(int i =0;i<rows;i++) {
    for(int j=0;j<cols;j++){
      cout << array[i][j]<< " " ;
    }
    cout << endl;

  }
  
}