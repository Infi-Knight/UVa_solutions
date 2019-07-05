#include <cstdio>
#include <iostream>

using namespace std;

int
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int ans, a, b, c, d;
  cin >> a >> b >> c >> d;
  while (a || b || c || d) {
    ans = 1080;
    ans += a < b ? (40 + a - b) * 9 : (a - b) * 9;
    ans += b > c ? (40 + c - b) * 9 : (c - b) * 9;
    ans += c < d ? (40 + c - d) * 9 : (c - d) * 9;
    cout << ans << "\n";
    cin >> a >> b >> c >> d;
  }
  return 0;
}
