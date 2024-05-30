#include<bits/stdc++.h>
using namespace std;
int main () {
     int tt; cin >> tt; while (tt--) {
          long long n, d = 0; cin >> n;
          if (n % 10 == 9) d = 1;
          cout << (d + n) / 10LL << '\n';
     }
}