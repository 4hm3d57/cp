#include <iostream>
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  for(int i=0; i<t; i++) {
    int n, s;
    cin >> n >> s;
    cout << s / (n*n) << "\n";
  }
  return 0;
}