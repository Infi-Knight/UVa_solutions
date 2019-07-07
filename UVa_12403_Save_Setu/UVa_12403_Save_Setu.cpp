#include <iostream>
using namespace std;
int
main()
{
  int t, donation = 0, temp;
  string operation;
  cin >> t;
  while (t--) {
    cin >> operation;
    if (operation == "report") {
      cout << donation << "\n";
    } else {
      cin >> temp;
      donation += temp;
    }
  }
  return 0;
}
