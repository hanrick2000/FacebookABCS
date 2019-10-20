#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

// Given a list of integers, k (vector) = [9, 99, -2, 0, -1, 2, 2, 1, 10, 8, 15, 22, 33, 3]  -> sort -> (-2, -1, 0, 1, 2, 3, 8, 9, 10, 15, 22, 33)

// Write a function that returns the longest consecutive sequence in the unsorted list

// LongestConsecutiveSeq(k) -> (-2, -1, 0, 1, 2, 3)

// Limit runtime complexity O(n)


void findLongestSequence(vector<int> k){

    
  unordered_set<int> s;

  int max_length = 0;

  int start_value = k[0];


  for (int i = 0; i < k.size(); i++){

    s.insert(k[i]);

  }

    
// if current element is the starting 
        // element of a sequence 
  for (int i = 0; i < k.size(); i++){

    if (s.find(k[i] -  1) == s.end()){

      int temp_len = 1; 

      int current = k[i];

      // Then check for next elements in the 
            // sequence 
      while (s.find(current) != s.end()){

	current++;                

	temp_len++; 

      }

      if(max_length< temp_len) {

	max_length = temp_len;

	start_value = k[i]; 

      }
    }
  }
}




