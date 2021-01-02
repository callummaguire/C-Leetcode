
// https://leetcode.com/problems/defanging-an-ip-address/
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
  string address = "255.100.50.0";

  string output = regex_replace(address, regex("\\."), "[.]");

  cout << output;
}
