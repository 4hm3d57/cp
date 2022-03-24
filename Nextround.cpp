#include <bits/stdc++.h>
using namespace std;

int main() {
 int n, k;
 cin >> n >> k;
 vector<int> a(n);
 int flag = 0;
 for(int i=0; i<n; i++) {
   cin >> a[i];
   if(a[i]>=a[k-1]&&a[i]!=0) {
     flag++;
   }
 }
 cout << flag;
 return 0;
}