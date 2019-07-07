#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t, tmp, a, b, c;
    int Case = 0;
    cin >> t;
    while(t--) {
      cin >> a >> b >> c;  
      if(a > c)
            tmp = a, a = c, c = tmp;
        if(b > c)
            tmp = b, b = c, c = tmp;
        if(a > b)
            tmp = a, a = b, b = tmp;
        printf("Case %d: %d\n", ++Case, b);
    }
    return 0;
}

