#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main ()
{

  int a, b;
  ostringstream aout;
  ostringstream bout;
  string astr;
  string bstr;

  scanf("%d:%d", &a, &b);

  if (b >= 55) {
    b -= 55;
    if (a == 23) {
      a = 0;
    } else {
      a += 1;
    }
  } else {
    b += 5;
  }

  aout << std::setfill('0') << std::setw(2) << a;
  bout << std::setfill('0') << std::setw(2) << b;
  astr = aout.str();
  bstr = bout.str();

  cout << astr << ":" << bstr << "\n";

  return 0;
}