// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  vector<int> candies = {2,3,5,1,3};
  int extraCandies = 3;
  vector<bool> output;
  int currMax = 0;
  for(int i = 0; i < candies.size(); i++) {
    currMax = (max(currMax, candies[i]));
  }

  for (int index = 0; index < candies.size(); index++) {
    if (candies[index] + extraCandies >= currMax) {
      output.push_back(true);
    } else {
      output.push_back(false);
    }
  }

  for (int i = 0; i < output.size(); i++) {
    cout << output[i];
  }
}
