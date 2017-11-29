#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  int n;
  vector<string> S(20);
  vector<string> T(20);


  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> S[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> T[i];
  }

  for (int i = 0; i < n; i++) {
    if (S[i] != T[i]) {
      cout << i + 1 << "\n";
      cout << S[i] << "\n";
      cout << T[i] << "\n";
      break;
    }
  }

  return 0;
}