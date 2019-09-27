#include <iostream>
#include <vector>
using namespace std;


// elements in an arc between 0 and 255
void count_sort(vector<int>& a){

  vector<int> histogram(256);
  for (int i = 0; i < a.size(); ++i){
    histogram[a[i]]++;
  }

  int cursor = 0;
  for (int i = 0; i < histogram.size(); ++i){
    while (histogram[i]-- > 0){
      a[cursor++] = i;
    }
  }
  
}
