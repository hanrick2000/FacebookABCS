#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Runtime: O(N^2) outer and inner loops go through every element
// worst case: if it is actually reverse then swapping all elements 

void selection_sort(vector<int>& array){

  for (int i = 0; i < array.size(); ++i) {

    int min_index = i; // assume the minimum index is the ith element

    for (int j = i + 1; j < array.size(); ++j){
      if (array[j] < min_index){
	min_index = j;
      }
    }

    swap(array[j], array[min_index]); //swap it 
    
  }

 

}

// Example:
// arr = [5 8 2 6 3 1 9 4]
//   1st loop min_index = 0, j = 1,
//   j = 2 it is smaller min_index = 2
//   j  = 3, j = 4, min_index =  5
//   j = 6 and j = 7,
//   end of for j loop
//   swap(arr[i], with arr[min_index])
//   swap(arr[0], arr[5])
// arr = [1 8 2 6 3 1 9 4]
// now i increments to 1
    
