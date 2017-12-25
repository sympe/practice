#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
  ios::sync_with_stdio(false);
  string str;
  int count = 0;
  int sum;
  int a;
  vector<string> strList;

  while (1) {
    cin >> str;

    if (str == "0") {
      break;
    }

    strList.push_back(str);
    count++;
  }

  for (int i = 0; i < count; i++) {
    cout << strList[i] << "\n";
  }

  return 0;
}