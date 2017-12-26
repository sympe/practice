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
  int offset;
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
    offset = 0;
    while (offset < strlen(strList[i])) {
      strList[i].substr(offset, 5);
      offset += 5;
    }

    cout << strList[i] << "\n";
  }

  return 0;
}