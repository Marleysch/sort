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

void read_and_write_nums(){
  ifstream numberfile;
  numberfile.open("numbers.dat");
  int num;
  int numofnums = 0;
  while (numberfile >> num){
    numofnums += 1;
  }
  numberfile.close();
  numberfile.open("numbers.dat");
  int A[numofnums];
  int endofarray = 0;
  while (numberfile >> num){
    A[endofarray] = num;
    endofarray += 1;
  }
  bubble(A, numofnums);
  ofstream output("mysort.out");
  for (int i = 0; i < numofnums; i++){
    output << A[i] << endl;
  }
}

int main(){
 read_and_write_nums(); 
}