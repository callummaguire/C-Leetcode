// https://leetcode.com/problems/goal-parser-interpretation/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string command = "(al)G(al)()()G";
  string output = "";
  for (int i =0; i < command.length(); i++) {
    if (command[i] == 'G') {
      output = output + 'G';
    }
    if (command[i] == '(') {
        if (command[i + 1] == ')') {
          output = output + 'o'; 
        } else {
          output = output + "al";
        }
    }
  }
  cout << output;
}
