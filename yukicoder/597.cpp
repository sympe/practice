#include <iostream>
using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  int n;
  string str;
  string ans = '';

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> str;
    ans = ans + str;
  }

  cout << ans << "\n";

  return 0;
}