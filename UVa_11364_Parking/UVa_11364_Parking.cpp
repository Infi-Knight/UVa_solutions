#include <cstdio>
#include <iostream>

using namespace std;

int
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T, numStore, min, max, temp;
  cin >> T;

  while (T--) {
    min = 99;
    max = 0;
    cin >> numStore;

    while (numStore--) {
      cin >> temp;

      if (temp < min)
        min = temp;
      if (temp > max)
        max = temp;
    }

    cout << (max - min) * 2 << "\n";
  }

  return 0;
}
