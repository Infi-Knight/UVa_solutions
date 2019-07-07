#include <iostream>
#include <string>
using namespace std;
int
main()
{
  int t, temp;
  string word;
  cin >> t;
  while (t--) {
    temp = 0;
    cin >> word;
    if (word.length() == 5)
      cout << 3;
    else {
      if (word[0] == 'o')
        temp++;
      if (word[1] == 'n')
        temp++;
      if (word[2] == 'e')
        temp++;
      temp >= 2 ? cout << 1 : cout << 2;
    }
    cout << "\n";
  }
  return 0;
}
