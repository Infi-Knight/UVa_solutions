#include <cstdio>
#include <iostream>
using namespace std;
int
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    cout << (n/3) * (m/3) << "\n";
  }
  return 0;
}