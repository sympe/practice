#include <iostream>
using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  string s1;
  string s2;
  cin >> s1 >> s2;
  if (s1[0] == s2[2] && s1[1] == s2[1] && s1[2] == s2[0]) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }

  return 0;
}