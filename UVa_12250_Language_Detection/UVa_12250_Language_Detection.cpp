#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

const string ENGLISH{ "HELLO" };
const string SPANISH{ "HOLA" };
const string GERMAN{ "HALLO" };
const string FRENCH{ "BONJOUR" };
const string ITALIAN{ "CIAO" };
const string RUSSIAN{ "ZDRAVSTVUJTE" };

int
main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int count = 1;
  string input;
  cin >> input;
  while (input != "#") {
    cout << "Case " << count++ << ": ";
    if (input == ENGLISH)
      cout << "ENGLISH\n";
    else if (input == SPANISH)
      cout << "SPANISH\n";
    else if (input == GERMAN)
      cout << "GERMAN\n";
    else if (input == FRENCH)
      cout << "FRENCH\n";
    else if (input == ITALIAN)
      cout << "ITALIAN\n";
    else if (input == RUSSIAN)
      cout << "RUSSIAN\n";
    else
      cout << "UNKNOWN\n";

    cin >> input;
  }
  return 0;
}
