#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int flag = 0;
  for(int i=0; i<n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b+c>=2) {
      flag++;
    }
  }
  cout << flag << "\n";
  return 0;
}