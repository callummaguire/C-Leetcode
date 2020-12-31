// https://leetcode.com/problems/running-sum-of-1d-array/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  static const int arr[] = {16,2,77,29};
  vector<int> seq (arr, arr + sizeof(arr) / sizeof(arr[0]) );
  vector<int> output;

  for (int index = 0; index < seq.size(); ++index)
  {
   if (index == 0) {
      output.push_back(seq[index]); 
   } else {
     int res = seq[index] + output[index - 1];
     output.push_back(res);
   }
  }

  for(auto const& value: output) {
    auto s = std::to_string(value);
    //cout << s + '\n';
  } 
}
