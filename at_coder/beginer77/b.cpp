#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  int N;
  int x;
  int y;
  cin >> N;
  x = static_cast<int>(sqrt(N));
  y = pow(x, 2.0);
  cout << y << "\n";

  return 0;
}