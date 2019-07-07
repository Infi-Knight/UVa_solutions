#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  double n;
  cin >> t;
  while(t--) {
    cin >> n;
    n = (((n*567) / 9 + 7492) * 235) / 47 - 498;
    cout << abs(((long)(n)/10) % 10) << "\n";
  }
  return 0;
}
