// Given an array of integers in which two elements appear exactly once and all other elements appear exactly twice, find the two elements that appear only once.

// For example, given the array [2, 4, 6, 8, 10, 2, 6, 10], return 4 and 8. The order does not matter.

// Follow-up: Can you do this in linear time and constant space?


#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;


void elements(vector<int> v){

  unordered_map<int, int> m;
  for (int i = 0; i < v.size(); i++){
    m[v[i]]++;
  }

  std::unordered_map<int, int>::iterator it = m.begin();
 

  while(it != m.end()){
    if (it->second == 1){
      cout <<it->second<<std::endl;
    }

  }
}

int main(){

 
  vector<int> v;
  v.push_back(2);
  v.push_back(4);
  v.push_back(6);
  v.push_back(8);
  v.push_back(10);
  v.push_back(2);
  v.push_back(6);
  v.push_back(10);

  elements(v);
}

