#include <iostream>
#include <vector>
using namespace std;

int main() {
 vector<vector<int>> accounts {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
  int maximum = 0;
  for (int i= 0; i < accounts.size(); i++) {
    int account = 0;
    for (int j= 0; j < accounts[i].size(); j++) {
        account = account + accounts[i][j];
    }
    if (maximum < account) {
      maximum = account;
    }
  }
  cout << maximum;
}
