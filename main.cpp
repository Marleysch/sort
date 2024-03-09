#include <iostream>
#include <fstream>
using namespace std;

void printarr(int array1[], int size){
  for (int i = 0; i<size; i++)
    cout << array1[i] << endl;
  cout << endl;
}

void bubble(int A[], int size){
  int swaps = 1;
  // number of swaps we need to check for
  int iterations = size;
  for (int j=0; j < size - 1; j++){ 
    swaps = 0;
    for (int i = 1; i < iterations; i++){
      if (A[i] < A[i - 1]){
        swap(A[i], A[i - 1]);
        swaps += 1;
      }
    }
    if (swaps == 0)
      break;
    iterations -= 1;
  }
}

int read_and_write_nums(){
  int test[] = {1,2,3,5,4};
  bubble(test, 5);
  for (int i=0;i<5;i++)
    cout << test[i] << endl;
}

int main(){
  
}