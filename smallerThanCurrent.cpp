// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {8,1,2,2,3};
  vector<int> output;

  for (int currentNum : nums) 
  {
    int count = 0;
    for (int currentCompareNumber : nums) 
    {
        if (currentCompareNumber < currentNum) {
          count++;
        }
      }
      output.push_back(count);
  }

 for (int i = 0; i < output.size(); i++) {
    cout << output[i];
  }
}

