#include <cstdio>
#include <iostream>

using namespace std;

int
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1, n, temp, ans;
  while (cin >> n, n) {
    ans = 0;
    while (n--) {
      cin >> temp;
      temp > 0 ? ans++ : ans--;
    }
    // printf and cout are out of sync(ios_base...), so can't use printf here
    cout << "Case " << t++ << ": " << ans << "\n";
  }
  return 0;
}
