#include <iostream>
using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  string str;

  cin >> str;

  if (str.find("575") > 0) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }

  return 0;
}