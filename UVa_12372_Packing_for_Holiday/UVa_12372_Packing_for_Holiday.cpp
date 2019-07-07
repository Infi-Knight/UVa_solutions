#include <cstdio>
#include <iostream>
using namespace std;
int
main()
{
  int t, l, w, h, count = 1;
  cin >> t;
  while (t--) {
    cin >> l >> w >> h;
    printf("Case %d: ", count++);
    if (l <= 20 && w <= 20 && h <= 20)
      cout << "good";
    else
      cout << "bad";
    cout << "\n";
  }
  return 0;
}
