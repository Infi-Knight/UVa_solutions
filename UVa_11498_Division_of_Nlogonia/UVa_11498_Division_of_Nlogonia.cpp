#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k, x0, y0;
  while (true) {
    int x, y;
    cin >> k;
    if (!k)
      break;
    cin >> x0 >> y0;
    while (k--) {
      cin >> x >> y;
      if (x == x0 || y == y0)
        cout << "divisa";
      else if (x > x0 && y > y0)
        cout << "NE";
      else if (x > x0 && y < y0)
        cout << "SE";
      else if (x < x0 && y < y0)
        cout << "SO";
      else
        cout << "NO";
      cout << "\n";
    }
  }
  return 0;
}
