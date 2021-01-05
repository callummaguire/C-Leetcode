// https://leetcode.com/problems/shuffle-string/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s = "aiohn";
  vector<int> indices = {3,1,4,2,0};
  vector<char> templateString;
  string output = s;
  for(int i = 0; i < s.size(); i++)
  {
      output[indices[i]]=s[i];
  }

  cout << output;
}

