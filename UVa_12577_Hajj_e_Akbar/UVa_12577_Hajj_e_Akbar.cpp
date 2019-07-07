#include <iostream>
#include <string>
using namespace std;
int
main()
{
  string word;
  int count = 1;
  while (cin >> word, word != "*") {
    printf("Case %d: ", count++);
    if (word == "Hajj")
      printf("Hajj-e-Akbar\n");
    else
      printf("Hajj-e-Asghar\n");
  }
  return 0;
}
